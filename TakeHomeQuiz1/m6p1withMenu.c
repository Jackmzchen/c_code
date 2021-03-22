#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

void menu();
void getInput(char *input);
int checkDictionary(char arrChar[][20], char *guess, int rows);
int InsertWord(char arrChar[][20], int rows);
void printDictionary(char arrChar[][20],int rows);
void stopProg();

void main()
{
    char dictionary[100][20] = {{"Around"},{"Pool"},{"Lifeguard"},{"Strangers"},{"Ordered"},
    {"Marbles"},{"Somewhere"},{"Futuristic"},{"Unrealistic"},{"Definition"},
    {"Surprise"}};
    
    while(1)
        menu(dictionary);
}

void menu(char dictionary[][20])
{
    int choice, rows = 0,found;
    char input[20] = {'\0'};

    printf("You have opened up your dictionary\n");
    printf("\t1.Search a word\n\t2.Add a word\n\t3.See the dictionary\n\t4.Close the dictionary\n");
    printf("Choose the option: ");
    scanf(" %d", &choice);

    while(dictionary[rows][20] != '\0')                                     //to calculate the preexisting amount of words, so the program knows what row to enter words on
        rows++;
    
    switch(choice)
    {
        case 1:
        {
            getInput(input);
            found = checkDictionary(dictionary,input,rows);
            if(found >= 0)
                printf("The word is found on row: %d\n\n",found);
            else
                printf("Word not found...\n");
            break;
        }
        case 2:
        {
            rows = InsertWord(dictionary,rows);
            printf("\n");
            break;
        }
        case 3:
        {
            printDictionary(dictionary,rows);
            printf("\n");
            break;
        }
        case 4:
            stopProg();
            break;
    }
}

void getInput(char *input)
{
    printf("Please enter a word: ");
    scanf(" %s",input);
}

int checkDictionary(char dict[][20],char *input, int rows)
{
    int found;
    for(found = 0; found <= rows; found++)
    {
        if(strcasecmp(dict[found], input) == 0)
        {
            return found;                       //returns the row found when counting starts at 1 and not 0
            break;
        }
    }
    return -1;
}

int InsertWord(char dict[][20], int rows)
{
    char choice, input[20] = {'\0'};
    int found;   
        rows++;
        getInput(input);
        if(input[0] >= 'a' && input[0] <='z')                                        //changes the first letter of the word to always be captialized
                input[0] -= 32;   
        
        found = checkDictionary(dict,input,rows);
        if((rows < 100 && found == -1))
        {
            strcpy(dict[rows],input);
            printf("Word %s has been added.\n",input);
            printf("You can add another %d words\n",100-rows);
        }
        else   
            printf("There is no more space to add words or the word was previously entered\n");
    return rows;
}

void printDictionary(char dict[][20],int rows)
{
    printf("\nThe Current # Words is %d\n",rows+1);
    for(int i=0; i <= rows; i++)
        printf("%s\n",dict[i]);
}

void stopProg()
{
    int choice;
        printf("Would You like to close your dictionary?\nPlease confirm by typing 2021, Type any other number to continue\n");
        scanf("%d",&choice);
        printf("\n");
        if(choice == 2021)
        {
            printf("You closed your dictionary as it is no longer required.\n");
            exit(-1);
        }
}