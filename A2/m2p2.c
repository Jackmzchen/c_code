#include <stdio.h>
int main()
{
	for(int row = 0; row < 5; row++)
	{
		printf("\t");
		for(int col =0; col <= 4; col++)
		{
		if ((row == 1 || row == 3) && ( col == 0 || col == 2 || col == 4))
			printf(" ");
		else if (row == 2 && (col == 1 || col == 3))
			printf (" ");
		else
		printf("*");		
		}
	printf("\n");
	}
	return 0;
}
