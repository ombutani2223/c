#include<stdio.h>
int main(){
char c;
int	lowercase;
int uppercase;
printf("enter a chracter: %c",c);
scanf("%c",&c);

lowercase=(c=='a' || c=='e' || c=='i' || c=='o' ||c=='u');

uppercase=(c=='A' || c=='E' || c=='I' || c=='O' ||c=='U');

if(lowercase||uppercase){
	printf("it is a ascii value");
}
else{
		printf("it is not a ascii value");
}
return 0;
}
