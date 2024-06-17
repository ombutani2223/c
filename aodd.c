#include <stdio.h>
int main()
{
 int i;
 
    for ( i = 'A'; i <= 'Z'; i++)
    {
	i=i+1;
        printf("%c - %c\t",i,i+32);    
    }
return 0;
}