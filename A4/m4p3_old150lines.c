#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 30

void inputString(char inputStr[], int strLen);
void convertChar(char inputStr[], int strLen);
void randChars(char ranchars[]);
void challenge(int value);
void chall(char Chal[], int number);

void main ()
{
    char inputStr[SIZE] = {'\0'};
    int strLen;
    for( int i = 0; i < 3; i++)
    {
        inputString(inputStr, strLen);
    }
    exit(-1);
}

void inputString(char inputStr[], int strLen)
{
    strLen =0;
    printf("Please enter a string: ");
    scanf(" %[^\n]s", inputStr);

    while(inputStr[strLen] != '\0')
    {
        strLen++;
    }

    convertChar(inputStr,strLen);
}
void convertChar(char inputStr[], int strLen)
{
    int value = 0;
    char randChar[10];
    for(int i = 0; inputStr[i] !='\0'; i++)
    {
        value += inputStr[i] * (strLen - i);
    }
    if(value == 1415)
    {
        printf("value is equal to %d\n", value);
        challenge(value);
    }
    else
    {
        printf("welcome, you may proceed.\n");
        randChars(randChar);
        printf("%s\n", randChar);
    }
}
void randChars(char randChar[])
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        randChar[i] = rand() % 94 + 33;
    }
}
void challenge(int value)
{
    srand(time(NULL));
    int chalNum = rand() % 3;
    char Chal[SIZE];

    if(chalNum == 0)
        chall(Chal, chalNum);
    if(chalNum == 1)
        chall(Chal, chalNum);
    if(chalNum == 2)
        chall(Chal, chalNum); 
}

void chall(char Chal[],int chalNum)
{
    if(chalNum == 0)
    {
        char answer[] = {"penny"};
        int flag = 0, i = 0;
        printf("[Riddle] What has a head, a tail, is brown, and has no legs?\n");
        scanf(" %[^\n]s",Chal);

        while(Chal[i] != '\0' && answer[i] != '\0')
        {
            if(Chal[i] != answer[i])
            {
                flag = 1;
                printf("Incorrect! Please Try again!\n");
                break;
            }
            i++;
        }
        if(flag ==0 && Chal[i] == '\0' && answer[i] == '\0')
        {
                printf("Congratulations! you have passed.\n");
                exit(-1);
        }
    }
    if(chalNum == 1)
    {
        char answer[] = {"piano"};
        int flag = 0, i = 0;
        printf("[Riddle] What has many keys, but can't even open a single door?\n");
        scanf(" %[^\n]s",Chal);

        while(Chal[i] != '\0' && answer[i] != '\0')
        {
            if(Chal[i] != answer[i])
            {
                flag = 1;
                printf("Incorrect! Please Try again!\n");
                break;
            }
            i++;
        }
        if(flag ==0 && Chal[i] == '\0' && answer[i] == '\0')
        {
                printf("Congratulations! you have passed.\n");
                exit(-1);
        }
    }
    if(chalNum == 2)
    {
        char answer[] = {"living room"};
        int flag = 0, i = 0;
        printf("[Riddle] What room do ghosts avoid?\n");
        scanf(" %[^\n]s",Chal);

        while(Chal[i] != '\0' && answer[i] != '\0')
        {
            if(Chal[i] != answer[i])
            {
                flag = 1;
                printf("Incorrect! Please Try again!\n");
                break;
            }
            i++;
        }
        if(flag == 0 && Chal[i] == '\0' && answer[i] == '\0')
        {
                printf("Congratulations! you have passed.\n");
                exit(-1);
        }
    }
}

/* DEBUGGING
if(chalNum == 1)
    {
        char answer[] = {"piano"};
        printf("[Riddle] What has many keys, but can't even open a single door?\n");
        scanf(" %[^\n]s",Chal);

        for(int i = 0; Chal[i] != '\0'; i++)
        {
            if(Chal[i] == answer[i])
            {
                if(Chal[i] != answer[i])
                    break;
                
                printf("Congratulations! you have passed.\n");
                exit(-1);
            }
            else
            {
                printf("Incorrect! Please Try again!\n");
                break;
            }
        }
    }
    if(chalNum == 2)
    {
        char answer[] = {"living room"};
        printf("[Riddle] What room do ghosts avoid?\n");
        scanf(" %[^\n]s",Chal);

        for(int i = 0; Chal[i] != '\0'; i++)
        {
            if(Chal[i] == answer[i])
            {
                if(Chal[i] != answer[i])
                    break;
                
                printf("Congratulations! you have passed.\n");
                exit(-1);
            }
            else
            {
                printf("Incorrect! Please Try again!\n");
                break;
            }
        }
    }
void chall2(char Chal[])
{
    char answer[] = {"piano"};
    printf("[Riddle] What has many keys, but can't even open a single door?\n");
    scanf(" %[^\n]s",Chal);

    for(int i = 0; Chal[i] != '\0'; i++)
    {
        if(Chal[i] == answer[i])
        {
            printf("Congratulations! you have passed.\n");
            exit(-1);
        }
        else
        {
            printf("Incorrect! Please Try again!\n");
            break;
        }
    }
}

void chall3(char Chal[])
{
    char answer[] = {"living room"};

    printf("[Riddle] What room do ghosts avoid?\n");
    scanf(" %[^\n]s",Chal);

    for(int i = 0; Chal[i] != '\0'; i++)
    {
        if(Chal[i] == answer[i])
        {
            printf("Congratulations! you have passed.\n");
            exit(-1);
        }
        else
        {
            printf("Incorrect! Please Try again!\n");
            break;
        }
    }
}
*/
