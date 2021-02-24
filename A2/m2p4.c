#include <stdio.h>

int main (void)
{
	// is limited to 2 bytes of memory ranging from -32,767 to 32,767
	short int aval = 100;
	int bval = 100;
	float cval = 100;
	double dval = 100;
	char eval = 100;
	// uses all 8 bits of memory ranges from 0 to 255
	unsigned char fval = 100;
	
	printf("Address of aval: %p, Value of aval: %d,Size of aval: %ld bytes\n", &aval, aval, sizeof(aval));
	printf("Address of bval: %p, Value of bval: %d,Size of bval: %ld bytes\n", &bval, bval, sizeof(bval));
	printf("Address of cval: %p, Value of cval: %f,Size of cval: %ld bytes\n", &cval, cval, sizeof(cval));
	printf("Address of dval: %p, Value of dval: %f,Size of dval: %ld bytes\n", &dval, dval, sizeof(dval));
	printf("Address of eval: %p, Value of eval: %c,Size of eval: %ld bytes\n", &eval, eval, sizeof(eval));
	printf("Address of fval: %p, Value of fval: %c,Size of fval: %ld bytes\n", &fval, fval, sizeof(fval));

}
