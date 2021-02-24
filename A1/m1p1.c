#include <stdio.h>

int main ()
{
	//the sum, average, input, and counter
	float sum = 0, avg, inpt, num = 0;
	// numbers to calculate
	int max;
	
	// Calculates the sum
	printf("How many numbers would you like to find the sum and average for?\n");
	scanf("%d", &max);
	
	while ( num < max)
	{
		printf("Enter a number: ");
		scanf("%f",&inpt);
		
		sum = (sum + inpt);
		// used to verify that sum was correct
		/*printf("your current sum is: %0.2f\n",sum);*/
		
		num++;
		
		
	}
		// calculate the average
		avg = sum / max;
		
	
		// print sum and average
		printf("Average is: %0.2f\n", avg);
		printf("Sum is: %0.2f\n",sum);
		
	return 0;
}
