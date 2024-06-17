#include<stdio.h>
int main(){
    int f=0,s=0;
    int arr1[3][3];
  
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("enter element of row:%d column:%d :",i,j);
        scanf("%d",&arr1[i][j]);

}
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("%d",arr1[i][j]);
      

}
    }
    
       
    printf("\n");

}