#include<stdio.h>
int main()
{
    int n;
    printf("Enter your array length:");
    scanf("%d",&n);
int number[n];
    for(int i=0;i<n;i++){
        printf("Enter the element of %d positions:",i);
        scanf("%d",&number[i]);
    }
    
    for(int i=0;i<n;i++){
        printf("%d\t",number[i]);
    }
    int num[n];
    for(int i=0;i<n;i++){
        printf("Enter the element of %d positions:",i);
        scanf("%d\n",&num[i]);
    }
    
    for(int i=0;i<n;i++){
        printf("%d\t",num[i]);
    }
}