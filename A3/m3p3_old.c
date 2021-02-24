#include <stdio.h>

int main ()
{
    char str[100], rev[100];
    int strlength = 0, begin, end, count;

    printf("Input a string\n");
    fgets(str,100,stdin);

    count = 0;
    while(str[count] != '\0')
    {
        count++;
    }
    strlength = count -1;
    
    end = strlength-1;
   
   //for reversing the string
   for (begin = 0; begin < strlength; begin++) 
   {
        rev[begin] = str[end];
        end--;
   }
   for(int lett = 0; lett < strlength; lett++)
    {
        if((rev[lett] >= 65 && rev[lett] <= 90) || (rev[lett] >= 97 && rev[lett] <= 122))
        {
            if(lett == 0 || rev[lett-1] == ' ')
            {
                if(rev[lett] >= 97 && rev[lett] <= 122)
                {
                    rev[lett] = rev[lett] -32;
                }
            }
            else
            {
                if(rev[lett] >= 65 && rev[lett] <=90)
                {
                    rev[lett] = rev[lett] +32;
                }
            }
        }      
   }
    printf("Reversed sentence: %s\n", rev);
    printf("Length: %d\n", strlength);

    return 0;
}