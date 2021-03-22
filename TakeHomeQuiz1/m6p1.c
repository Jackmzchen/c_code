#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

void menu(char arrChar[][20]);
void continueExit();
void getInput(char *input);
int checkDictionary(char arrChar[][20], char *guess, int rows);
int InsertWord(char arrChar[][20],char *guess, int rows);
void printDictionary(char arrChar[][20],int rows);

void main()
{
    char dictionary[100][20] = {{"Around"},{"Pool"},{"Lifeguard"},{"Strangers"},{"Ordered"},
    {"Marbles"},{"Somewhere"},{"Futuristic"},{"Unrealistic"},{"Definition"},
    {"Surprise"}};
    
    menu(dictionary);
}
void menu(char dictionary[][20])
{
    int found, flag = 0; 
    int rows= 0;            
    char guess[20] = {'\0'};

    while(rows < 100)                                                           //runs to 100, unless the program gets cancelled by 2021
    {
        if(flag == 0)                                                           //set the flag so that the next loop only calculates once since it is meant to calculate the preset words
        {
            flag = 1;
            while(dictionary[rows][20] != '\0')                                     //counts the number of prefilled slots in the dictionary before the additions of words
                rows++;
        }
        getInput(guess);
        found = checkDictionary(dictionary,guess,rows);
        if(found > 0)
            printf("The word is already found on row: %d\n",found-1);
        else if(found == 0)
        {
            rows++;
            printf("Word not found...\n");
            rows = InsertWord(dictionary, guess, rows);
        }
        printf("\n");
        printDictionary(dictionary,rows);
    }
}
void continueExit()
{
     printf("You closed your dictionary, as it is no longer required.\n");
        exit(-1);
}
void getInput(char *input)
{
        int choice;
        printf("You have opened up your dictionary.\nWould you like to search a word?\nType 1 to search, 2021 to cancel\n");
        scanf(" %d", &choice);
        if(choice == 1)
        {
            printf("Please enter the word: ");
            scanf(" %[^\n]s", input);
            
            if(input[0] >= 97 && input[0] <=122)                                        //changes the first letter of the word to always be captialized
                input[0] -= 32;                                                         //so that it matches with the rest of the dictionary
        }
        else if(choice == 2021)
            continueExit();
}
int checkDictionary(char arrChar[][20],char *guess, int rows)
{
    int found, flag = 0;
    for(found = 0; found <= rows; found++)
    {
        if(strcasecmp(arrChar[found], guess) == 0)
        {
            return found + 1;                       //returns the row found when counting starts at 1 and not 0
            printf("found is %d\n", found);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        {
            found = 0;
            return found;
        }
}
int InsertWord(char arrChar[][20], char *guess, int rows)                             //passing the input was added so I don't have to call
{                                                                                      //the getInput function to insert the said word.
    char choice;
    printf("Would you like to add the word previously entered? [y/n] ");
    scanf(" %c", &choice);    
        
    if(choice == 'y')  
    {
        strcpy(arrChar[rows], guess);
        printf("Word %s has been added.\n", guess);
    }
    if(choice == 'n')
        rows--;
    printf("\n");
    
    return rows;
}

void printDictionary(char arrChar[][20], int rows)
{
    char choice,choice2;
    printf("The current number of words in the dictionary is %d\n", rows+1);
    printf("Would you like to print the dictionary? [y/n] ");
    scanf(" %c", &choice); 
    if(choice == 'y')  
    { 
        for(int i = 0; i <= rows; i++)
            printf("%s\n",arrChar[i]);
    }
    printf("\nContinue Searching? [y/n] ");
    scanf(" %c", &choice2);
    if(choice2 == 'n')
        continueExit();
}
/* DEBUGGING
//char input[20];
//printf("Enter the word to add: ");
//scanf(" %[^\n]s",input);
*/