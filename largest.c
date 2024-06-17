
#include<stdio.h>
int main(){
	
int a,b,c;

printf("enter subject a:");
scanf("%d",&a);
printf("enter subject b:");
scanf("%d",&b);
printf("enter subject c:");
scanf("%d",&c);

if(a>b && a>c){
	if(b>c){
		printf("B is larger");
	}else{
		printf("A is greater");
}
}
else{
	printf("c is greater");
}

return 0;
}