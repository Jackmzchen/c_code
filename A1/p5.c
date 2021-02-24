#include <stdio.h>

int main (void)

{
	int value = 2;
	float value1 = value - 25.8;
	
	printf("Float: %f, Integer: %d\n", value1, value);
	
	value1 = (int) value1;
	printf("Float %f, Integer: %d\n",  value1 , value);

}
