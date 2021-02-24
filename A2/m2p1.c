#include <stdio.h>
int main()
{
    // calculates rows	
    for(int row = 0; row < 5; row++)
	{
		printf("\t");
        // calculate the columns and * locations
        for(int col =0; col <= 7; col++)
		{
		if((row == 1 || row == 3) && (col == 0 || col == 7))
			printf(" ");
		else if (row == 2 && (col <= 2 || col >= 5))
			printf(" ");
		else
		printf("*");	
		}
		printf("\n");
	}
	return 0;
}
