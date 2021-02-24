#include <stdio.h>

int main ()
{
	// input
	int inpt;
	
	// choices
	printf("Please choose one of the options below:\n");
		printf("1.Hello\n");
		printf("2.Welcome\n");
		printf("3.To\n");
		printf("4.My\n");
		printf("5.Source\n");
		printf("6.Code\n");
		printf("7.For\n");
		printf("8.Problem 2\n");
		
	//user input	
		
		printf("Please enter your choice: ");
		scanf("%d", &inpt);
		
	// repeats the option chosen if it is less than or equal to 8
	if(inpt <= 8) {
		printf("You have chosen option: %d\n",inpt);
		printf("Thank you for your choice, program has now stopped\n");
		
	}
	// state for any number greater than 8 is inputted.
	else {
		printf("Your input is too big, max number allowed is 8\nPlease Try Again!\n");
		
	}
	return 0;
}
