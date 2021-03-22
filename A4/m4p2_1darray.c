#include "header2.h"

void main()
{
   char str[SIZE] = {'\0'};
   getStrings(str);
   isPalindrome(str);
}

void getStrings(char str[])
{   
    printf("Please enter a string: ");
    scanf("%[^\n]s", str);
    printf("\n");
}
void isPalindrome(char str[])
{
    char revStr[SIZE] = {'\0'};
    int flag = 0;
    revString(str, revStr);
   
    for(int i = 0; str[i] !='\0'; i++)
    {
        if(str[i] != revStr[i])
        {
            flag = 1;
            break;
        }
    }
     if(flag == 0)
        {
            printf("String %s is a palindrome\n", str);
        }
        else
        {
            printf("String %s is not a palindrome\n", str);
        }
}
void revString(char str[], char revStr[])
{
    int strlen = 0, end;

    while(str[strlen] != '\0')
    {
        strlen++;
    }
    
    for(int i =0; i < strlen; i++)
    {
        revStr[i] = str[strlen- i - 1];
    }
}