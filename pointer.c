#include<stdio.h>
int main(){
    int a;
    int b;
    int *p= &a;
    int *i= &b;
    printf("Enter a value:");
    scanf("%d", &a);
    printf("Enter b value:");
    scanf("%d", &b);

    printf("Before a=%d b=%d", *p, *i);
    *p = *p + *i;
    *i = *p - *i;
    *p = *p - *i;
    printf("\nAfter a=%d b=%d", *p, *i);    
}