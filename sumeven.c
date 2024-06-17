#include <stdio.h>
int main()
{
 int sum = 0;
 
    for (int i = 1; i <= 6; i++)
    {
		i=i+1;
        sum = sum + i;
        printf("%d ",i);    
    }
    printf("\nThe Sum is : %d\n", sum);
}