#include <stdio.h>

int main ()
{

	int inpt;
	int res;
	int rem;
	int nxnm;

	while(inpt < 255){

		printf("Please enter a number: ");
		scanf("%d", &inpt);

		do{
			res = inpt/2;
			rem = inpt%2;

			inpt = res/2;

			for (nxnm = 0; nxnm < 19; nxnm++){
				
				if(nxnm == 4 || nxnm == 9 || nxnm == 14)
					printf(" ");
				if(rem == 0)
					printf("0");
				else
					printf("1");
			}
		}
		while(inpt > 0);




	}






}