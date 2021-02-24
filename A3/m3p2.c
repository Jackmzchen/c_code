#include <stdio.h>
#define BITS 16

int main() 
{
    int inpt,c, rem[BITS], skipZero = 1;
    char hexletter[4];
    for(int hl = 1; hl<=3; hl++)
    {
        hexletter[hl] = ' ';
    }
    
    printf("Enter a decimal number: ");
    scanf("%d", &inpt);
    printf("%d in binary is: \n", inpt);
    
    if(inpt > 65535)
    {
        printf("Your input is greater than what can be calculated, please restart the program.\n");
    }
    else
    {
        //calculation of the binary and storing it in the index values
        for(c= 0; c<=BITS-1; c++)
        {
            rem[c] = inpt%2;
            inpt = inpt/2;
        }
        //printing the binary in reverse
        for(c=3; c>= 0; c--){
            //removing the leading zeroes
            if(skipZero == 1 && rem[c*4]==0 && rem[c*4 + 1]==0 && rem[c*4 + 2]==0 && rem[c*4 + 3]==0)
            {
                continue;
            }
            else{
                //ensures that the previous code just runs once
                skipZero = 0;
                
                //calculates the total 1s of each of the bits to be converted to hexadecimal
                int total = rem[c*4 + 0]*1 + rem[c*4 + 1]*2 + rem[c*4 +2]*4 + rem[c*4 + 3]*8;
                
                if(total < 10)
                {
                    hexletter[c] = '0' + total;
                }
                else
                {
                   hexletter[c] = 'A' + total-10;
                }
                for(int j=3; j>=0; j--)
                {
                    printf("%d",rem[c*4 + j]);
                }
                    if(c!=0)
                    {
                        printf(" ");
                    }
            }
        }
        printf("\n");
        printf("The hexadecimal of the number is:\n0x");
        for(int h = 3; h>=0; h--)
        {
            if(hexletter[h]!= ' ')
            {
                printf("%c",hexletter[h]);
            }
        }
        printf("\n");
    }
    return 0;
}
/*
1. The best choice to store each of the individual bits would be a char since it has the least amount of memory allocated being at 1 byte.
2. I choose this because an individual bit would be a 0 or a 1, 
which is well within the range of values that char can handle. In other words 0 to 255.
3. The bits required to store the number 75000 would be a total of 20 bits or 5 nibbles.

/*
rem[c] = inpt%2;
inpt = inpt/2;
*/