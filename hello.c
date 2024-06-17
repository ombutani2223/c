#include<stdio.h>
int main(){
    char  arr[5]={'H' ,'E' ,'L' ,'L', 'O'};
    for(int i=0;i<=4;i++){
        for(int j=0;j<=i;j++){
        printf("%c\t",arr[j]);
        }  printf("\n");
        }
      
}