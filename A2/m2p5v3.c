#include <stdio.h>
int main()
{
	// input result
	long bin = 0;
	int inpt, rem = 0, place = 1;

	while(inpt <= 255)
	{
		printf("enter a number: ");
		scanf("%d", &inpt);

		rem = inpt%2;
		inpt = inpt/2;
		bin = bin + (rem*place);
		place = place * 10;
	}
	
	printf("%ld", bin);
	return 0;
}

			
			/* verify
			printf("Your input is: %d\n", inpt);
			printf("res1: %d rem1: %d\n", res1, rem1);
			printf("res2: %d rem2: %d\n", res2, rem2);
			printf("res3: %d rem3: %d\n", res3, rem3);
			printf("res4: %d rem4: %d\n", res4, rem4);
			printf("res5: %d rem5: %d\n", res5, rem5);
			printf("res6: %d rem6: %d\n", res6, rem6);
			printf("res7: %d rem7: %d\n", res7, rem7);
			printf("res8: %d rem8: %d\n", res8, rem8);
			printf("res9: %d rem9: %d\n", res9, rem9);
			printf("res10: %d rem10: %d\n", res10, rem10);
			printf("res11: %d rem11: %d\n", res11, rem11);
			printf("res12: %d rem12: %d\n", res12, rem12);
			printf("res13: %d rem13: %d\n", res13, rem13);
			printf("res14: %d rem14: %d\n", res14, rem14);
			printf("res15: %d rem15: %d\n", res15, rem15);
			printf("res16: %d rem16: %d\n", res16, rem16);
			*/
