#include "m4p2.h"

void main()
{
   char str[STR][SIZE] = {'\0'};
   getStrings(str);
   isPalindrome(str);
}
void getStrings(char str[STR][SIZE])
{   
    for(int i = 0; i < STR; i++)
    {
        printf("Please enter a string: ");
        scanf(" %[^\n]s", str[i]);
    }
    printf("\n");
}
void isPalindrome(char str[STR][SIZE])
{
    char revStr[SIZE] = {'\0'};
    for(int i = 0; i < STR; i++)
    {
        revString(str[i], revStr);
        
        int flag = 0;
        for(int j = 0; str[i][j] !='\0'; j++)
        {
            if(str[i][j] != revStr[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("String %s is a palindrome\n", str[i]);
        else
            printf("String %s is not a palindrome\n", str[i]);
    }
}
void revString(char str[], char revStr[])
{
    int strlen = 0, end;

    while(str[strlen] != '\0')
        strlen++;
    for(int i =0; i < strlen; i++)
        revStr[i] = str[strlen- i - 1];
}