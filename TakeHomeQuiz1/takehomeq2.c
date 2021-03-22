#include<stdio.h>
#include<string.h>
#include <ctype.h>

void swap(char *left, char *right)
{
	int i = 0;
	while((*(left+i) != '\0') || (*(right+i) !='\0'))
	{
		if((*(left+i) == '\0') || (*(right+i) =='\0'))
			break;
		if(*(left+i) > *(right+i))
		{
			char temp = *(left + i);
			*(left+i) = *(right+i);
			*(right+i) = temp;
		}
		i++;
	}
	printf("\nThe Two Strings swapped are:\nString 1: %s\nString 2: %s\n",left,right);
}

void reverse(char *string)
{
	int len_str = 0;
	int count = 0;

	while( *(string + count) )
	{
		count++;
	}

	for(int col = 0; col < count/2; col++)
	{
		char temp = *(string+col);
		*(string+col) = *(string+(count - col - 1));
		*(string+(count - col - 1)) = temp;
	}	
}
/*******************************************************************
 * title_rev: is a function that takes the address of a string
 *            it reverses the string and then converts the string to
 *            title cased:
 * Example: This is my string become Gnirts Ym Si Siht
 *******************************************************************/
void title_rev(char *string)
{
	int i = 0;
	reverse(string);
	while(*(string+i)!='\0')
	{
		if(i==0 || *(string+i-1)==' ')
			*(string+i) = toupper(*(string+i));
		i++;
	}
	printf("\nString Reversed and Title Cased Is: %s\n",string);
}
/***********************************************************************************************
 * clr_stdin implemented based on code
 * Reference: https://stackoverflow.com/questions/38767967/clear-input-buffer-after-fgets-in-c
 *
 ***********************************************************************************************/
void clr_input(char *string1)
{
	char *pos = strchr(string1, '\n');
	if(pos)
	{
		*pos = '\0';
	}
	else
	{
		scanf("%*[^\n]");
		scanf("%*c");
	}
}

void getInput(char *string1, char *string2)
{
	char string[40] = {'\0'};
	for(int i = 0; i < 2; i++)
	{
		printf("Please enter string %d: ", i+1);
		fgets(string, 40, stdin);
		clr_input(string);
		
		if(i == 0)
			strcpy(string1,string);
		if(i == 1)
			strcpy(string2,string);
	}	
}
int main()
{
	char array1[40];
	char array2[40];

	getInput(array1,array2);
	title_rev(array1);
	title_rev(array2);
	swap(array1,array2);
	
	return 0;
}