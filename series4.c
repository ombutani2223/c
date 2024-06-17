#include <stdio.h>  
int main ()  
{ 
int n;
printf("enter your number ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
i=i*2+2;
printf("\t %d",i);
}

		  
return 0;  
}