#include<stdio.h>
void area_intrest(){
    int principle,rate,time,intrest;
    printf("enter the principle:");
    scanf("%d",&principle);
       printf("enter the rate:");
    scanf("%d",&rate);
        printf("enter the time:");
    scanf("%d",&time);
    intrest=(principle*rate*time)/100;
    printf("the area of intrest is :%d",intrest);
}
int a_intrest(){
    int principle,rate,time,intrest;
    printf("\nenter the principle:");
    scanf("%d",&principle);
    printf("enter the rate:");
    scanf("%d",&rate);
    printf("enter the time:");
    scanf("%d",&time);
    intrest=(principle*rate*time)/100;
    return intrest;
}
int main(){
    area_intrest();
    int intrest;
    intrest=a_intrest();
    printf("the area of intrest is :%d\n",intrest);
    return 0;
}