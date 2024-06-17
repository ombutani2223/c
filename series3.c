#include <stdio.h>  
int main ()  
{ 
int n,total=1;
printf("enter your number ");
scanf("%d",&n);
for(int i=0;i<=n;i++){
	total=total*2;
printf("%d",total);
}

		  
return 0;  
}