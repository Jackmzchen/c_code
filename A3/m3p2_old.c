#include <stdio.h>
#define BITS 16

int main() {
   short int inpt,c, rem[BITS], skipZero = 1,h;
    
    //for the storing of hexadecimal and related information
    char hexdecm[BITS];
    int temp = 0, k =1;
    printf("Enter a decimal number: ");
    scanf("%d", &inpt);
    printf("The hexadecimal value is 0x%X\n", inpt);
    printf("%d in binary is: \n", inpt);
    
    //calculation of the binary and storing it in the index values
    for(c= 0; c<=BITS-1; c++){
        rem[c] = inpt%2;
        inpt = inpt/2;
        printf("%d", rem[c]);
    }
    printf("\n");
    //printing the binary in reverse
    for(c=3; c>= 0; c--){
            //removing the leading zeroes
            if(skipZero == 1 && rem[c*4]==0 && rem[c*4 + 1]==0 && rem[c*4 + 2]==0 && rem[c*4 + 3]==0){
                continue;
            }
            else{
                skipZero = 0;
                for(int j = 3; j >=0; j--){
                        printf("%d", rem[c*4 + j]);
                    }
                if(c!=0){
                    printf(" ");
                }
            }
    }
    printf("\n");
}
     
/*
rem[c] = inpt%2;
inpt = inpt/2;
*/