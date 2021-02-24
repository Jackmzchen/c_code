#include <stdio.h>
int main()
{
	// input result
	int inpt;
	int res1,res2,res3,res4,res5,res6,res7,res8;
	int res9,res10,res11,res12,res13,res14,res15,res16;
	// remainder
	int rem1,rem2,rem3,rem4,rem5,rem6,rem7,rem8;
	int rem9,rem10,rem11,rem12,rem13,rem14,rem15,rem16;
	
		printf("Program Started.\n");
		printf("Enter a number less than or equal to 65535.\n");
		printf("Enter a number greater than 65535 to exit.\n");
		while(inpt <= 65535)
		{	
			printf("Please enter a number: ");
			scanf("%d", &inpt);
			printf("\n");
		if(inpt > 65535) {
			printf("Your input is greater than 65535, please run the program again!\n");
			}
		else {		
				res1 = inpt/2;
				rem1 = inpt%2;
		
				res2 = res1/2;
				rem2 = res1%2;
		
				res3 = res2/2;
				rem3 = res2%2;
		
				res4 = res3/2;
				rem4 = res3%2;
		
				res5 = res4/2;
				rem5 = res4%2;
		
				res6 = res5/2;
				rem6 = res5%2;
				
				res7 = res6/2;
				rem7 = res6%2;
		
				res8 = res7/2;
				rem8 = res7%2;
				
				res9 = res8/2;
				rem9 = res8%2;
				
				res10 = res9/2;
				rem10 = res9%2;

				res11 = res10/2;
				rem11 = res10%2;	
				
				res12 = res11/2;
				rem12 = res11%2;
				
				res13 = res12/2;
				rem13 = res12%2;
				
				res14 = res13/2;
				rem14 = res13%2;
				
				res15 = res14/2;
				rem15 = res14%2;
				
				res16 = res15/2;
				rem16 = res15%2;
				
				printf("Binary Value:\n");
				printf("%d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d\n",rem16,rem15,rem14,rem13,rem12,rem11,rem10,rem9,rem8,rem7,rem6,rem5,rem4,rem3,rem2,rem1);
				printf("\n");
				printf("Most significant bit to the RIGHT: \n");
				printf("%d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d\n",rem1,rem2,rem3,rem4,rem5,rem6,rem7,rem8,rem9,rem10,rem11,rem12,rem13,rem14,rem15,rem16);
				printf("\n");
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
		}	
	return 0;
}
