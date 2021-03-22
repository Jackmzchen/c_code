#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 30

void inputString(char inputString[], int strLength);
void randchars();
void challenge();
void checkAnswer(char Challenge[], int challengeNum);

void main ()
{
    char inputStr[SIZE] = {'\0'};
    int strLen, count = 0;
    srand((unsigned)time(NULL));
    while(1)
    {
        printf("Attempt: %d\n", count+1);
        inputString(inputStr, strLen);
        count++;
        if(count == 3)
          exit(-1);

        printf("\n");
    }
}

void inputString(char inputStr[], int strLen)
{
    strLen =0;
    printf("Please enter a string:");
    scanf(" %[^\n]s", inputStr);

    while(inputStr[strLen] != '\0')
        strLen++;

    int value = 0;
    for(int i = 0; inputStr[i] !='\0'; i++)
        value += inputStr[i] * (strLen - i);
    
    if(value == 8470)
        challenge();
    else
    {
        printf("welcome ... you may proceed.\n");
        randchars();
    }
}
void randchars()
{
    char randChar[10];
    for (int i = 0; i < 10; i++)
        randChar[i] = rand() % 94 + 32;
    printf("%s\n", randChar);
}
void challenge()
{
    int chalNum = rand() % 3;
    char Chal[SIZE];

    printf("Type the one word riddle answer in lower case!\n");
    if(chalNum == 0)
        printf("[Riddle] What has a head, a tail, is brown, and has no legs?\n");
    else if(chalNum == 1)
        printf("[Riddle] What has many keys, but can't even open a single door?\n");
    else
        printf("[Riddle] What room do ghosts avoid?\n");
    
    scanf(" %[^\n]s",Chal);
    checkAnswer(Chal, chalNum);
}
void checkAnswer(char Chal[],int chalNum)
{
    int flag = 0, i = 0;;
    char answer[3][SIZE] = {{"penny"}, {"piano"}, {"livingroom"}};
    while(Chal[i] !='\0')
    {
        if(Chal[i] != answer[chalNum][i])
        {
            flag = 1;
            printf("INCORRECT!, try again...\n");
            break;
        }
        i++;
    }
    if(flag == 0)
    {
        printf("Congratulations! you passed. Welcome to the program.\n");
        exit(-1);
    }
}
/*
1> This is a good algorithm, but can also be bad.
2> This is a good one because it is hard to guess the exact combination of words that can give the value of 8470.
if the method of calculating the value is not known. It can be bad if the source code is accessed the value that triggers the challenge 
is changed to one thats easily accessed. 

char answer[] = {"penny"};
char answer[] = {"piano"};
char answer[] = {"livingroom"};
*/