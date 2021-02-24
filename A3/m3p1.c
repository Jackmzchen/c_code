#include <stdio.h>

int main()
{
    char inptarr[41];
    //input
    char inpt;
        //input and retrieve the string
        printf("Enter a sentence:");
        fgets(inptarr, 41, stdin);
        
        //confirms that the string was retrieved successfully.
        //printf("%s", inptarr);
        printf("\n");
    
    printf("Press A to Captialize or Press B to Title Case\n");
    scanf(" %c", &inpt);

    // calculate capitalization of ALL characters
    if(inpt == 'a' || inpt == 'A') 
    {
        for(int lett =0; inptarr[lett]!='\0'; lett++) 
        {
            // if the letters fall between 'a' and 'z'
            if(inptarr[lett] >= 97 && inptarr[lett] <=122) 
            {
                inptarr[lett] = inptarr[lett] - 32;
            }
        }
    }
    // calculate title case of the characters
    if(inpt =='b' || inpt == 'B') 
    {
           for(int lett = 0; inptarr[lett]!='\0'; lett++) 
           {
               // if the letters fall between both lower and upper case 'a' and 'z'
               if((inptarr[lett] >= 65 && inptarr[lett] <= 90) || (inptarr[lett] >= 97 && inptarr[lett] <= 122)) 
               {
                   //checks if the letter is at the start or if its right after a space
                   if(lett == 0 || inptarr[lett-1] == ' ') 
                   {
                        //make letter upper case 'A' to 'Z'
                       if(inptarr[lett]>= 97 && inptarr[lett]<= 122) 
                       {
                           inptarr[lett] = inptarr[lett] - 32;
                       }
                   }
                    //make the letter lower case 'a' to 'z'
                   else if (inptarr[lett]>=65 && inptarr[lett]<=90) 
                   {
                        inptarr[lett] = inptarr[lett] + 32;
                   }
               }
           }
    }
    printf("%s", inptarr);
    return 0;
}