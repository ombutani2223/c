
#include <stdio.h>

int main() 
{    
    int i, j;
    int rows = 5;
    int number = 65;
 
    for (i = 0; i < rows; i++) 
    {
 
        for (j = 0; j <= i; j++) 
        {
            char character = (char)(number);
           
       
            printf("%c ", character);
           
     
            number++;
        }
        printf("\n");
    }
    return 0;
}