#include <stdio.h>

int main ()
{
    char str[100], rev[100];
    int strlength = 0, begin, end, count;

    printf("Enter a sentence: ");
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
   //if lett count is less than string length
   for(int lett = 0; lett < strlength; lett++)
    {
      //if the letter is between upper lower case 'a' to 'z'
        if((rev[lett] >= 65 && rev[lett] <= 90) || (rev[lett] >= 97 && rev[lett] <= 122))
        {
            //if letter is the start or is near a space
            if(lett == 0 || rev[lett-1] == ' ')
            {
                //if letter is a lowercase 'a' to 'z'
                if(rev[lett] >= 97 && rev[lett] <= 122)
                {
                    rev[lett] = rev[lett] -32;
                }
            }
            else
            {  
               //if letter is a lowercase 'A' to 'Z'
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