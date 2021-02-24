#include <stdio.h>

int main ()
{
	//the sum, average, input, and counter
	int sum = 0, inpt, num = 1;
	float avg;
	
	printf("Please enter 10 numbers.\n");
	while (num < 11)
	{
		printf("Enter a number %d: ", num);
		scanf("%d",&inpt);
		
		sum = (sum + inpt);
		
		 // to make sure that the sum was being added correctly
		//printf("your current sum is: %d\n",sum);
		
		num++;
	}
		// Calculate the average
		avg = (float) sum / 10;
		
		// print sum, average, odd/even
		printf("Sum is: %d\n",sum);
		if(sum % 2 == 0)
			printf("The number is even\n");
		else
		{
			printf("The number is odd\n");
		}
		printf("Average is: %0.2f\n", avg);
		
		
	return 0;
}
