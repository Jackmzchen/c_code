#include <stdio.h>

int main(){
    int intarr[6], inpt;
    char chararr[6], charinpt;

    for(int intCount = 0; intCount <6; intCount++)
    {
        printf("Enter integer number %d:",intCount+1);
        scanf(" %d", &inpt);

        intarr[intCount] = inpt;   
    }
        printf("\n");
        printf("Enter 6 [max] letter string:");
        scanf(" %[^\n]s", chararr);
        printf("\n");

    // printing the results    
    printf("Element\t\tAddress\t\tHexadecimal Value\n");
    printf("==================================================\n");
    
        for(int intCount = 0; intCount <6; intCount++)
        {
            printf("Integer[%d]\t%p\t0x%X\n", intCount+1, &intarr[intCount],intarr[intCount]);   
        }
    
    printf("==================================================\n");
        
        for(int charCount = 0; charCount <6; charCount++)
        {
            printf("Chararr[%d]\t%p\t0x%X\n", charCount+1, &chararr[charCount],chararr[charCount]);   
        }
    
    printf("==================================================\n");

    return 0;
}

/*
1. The difference in the address between Integer [1] and Integer [2] is a difference of 4 in the last number address
2. we can conclude that the size is that 4 bytes since that was shown in the difference between Integer [1] and Integer [2]
3. The difference in address between Chararr [1] and Chararr[2] is a difference of 1 in the last number of the address
4. We can conclude that the size of Chararr is 1 byte since that is shown in the difference between Charr[1] and Chararr[2]
5. To calculate the number of bytes used by each array would be to add up the difference in the last numbers in the address based 
    on however many times data was stored in the array.
*/

/*DEBUGGING
printf("%d is at index of 0\n",intarr[1]);
    printf("%d is at index of 1\n",intarr[2]);
    printf("%d is at index of 2\n",intarr[3]);
    printf("%d is at index of 3\n",intarr[4]);
    printf("%d is at index of 4\n",intarr[5]);
    printf("%d is at index of 5\n",intarr[6]);
    printf("the address of intarr[1] is: %p %x", &intarr[1], intarr[1]);
*/