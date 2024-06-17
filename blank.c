#include<stdio.h>
int main(){

    int arr1[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("enter element of row:%d column:%d :",i,j);
        scanf("\n%d",&arr1[i][j]);
}
    }
  
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
 if(arr1[i][j]==0){
    printf(" ");
 }
 else{
    printf("\t%d",arr1[i][j]);
 }
}
    }
    printf("\n\t");

}