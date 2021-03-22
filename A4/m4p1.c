#include <stdio.h>
#define SIZE 12

int getNums(float unsortArr[], float sortArr[])
{
    int count = 0;
     for(int i = 0; i < SIZE; i++)
    {
        unsortArr[i] = 0;
        sortArr[i] = 0; 
    }
    printf("Please enter up to 12 decimal numbers,\nenter 0 to stop adding new entries and proceed with displaying the output.\n");
    for(int i = 0; i < SIZE; i++)
    {
        printf("Please enter number %d: ", i+1);
        scanf(" %f", &sortArr[i]);
        unsortArr[i] = sortArr[i];
        
        if(sortArr[i] == 0)
        {
            break;
        }
        count++;
    }
    printf("\n");
    return count;
}
void sortNums(float sortArr[])
{
    float swap;
    for (int i = 0 ; i < SIZE - 1; i++)
    {

    for (int j = 0 ; j < SIZE - i - 1; j++)
    {
      if ((sortArr[j+1] !=0) && (sortArr[j] > sortArr[j+1]))
      {
        swap = sortArr[j];
        sortArr[j] = sortArr[j+1];
        sortArr[j+1] = swap;
      }
    }
  }  
}
void printArr(float unsortArr[], float sortArr[])
{
    int count = getNums(unsortArr, sortArr);
    sortNums(sortArr);
    printf("Unsorted Array:\tSorted Array:\n");
    printf("==============\t============\n");
    for (int i= 0; i < SIZE; i++)
    {
        if(sortArr[i] != 0)
        {
            printf("%0.1f\t\t%0.1f\n",unsortArr[i], sortArr[i]);
        }
    }
    printf("\n");
    printf("The total number of entries entered is %d\n", count);
    printf("\n");
}
int main(void)
{
    float unsortArr[SIZE], sortArr[SIZE];
    printArr(unsortArr, sortArr);
}
/*Debugging
 for(int i =0; i < SIZE; i++)
{
    printf("%0.1f\n",sortArr[i]);
}
printf("%0.1f is at index of %d\n",sortArr[i], i);
*/