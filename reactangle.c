#include<stdio.h>
void area_rec(){
    int width,height;
    int area;
    printf("enter the width:");
    scanf("%d",&width);
       printf("enter the height:");
    scanf("%d",&height);
    area=width*height;
    printf("the area of rectangle is :%d",area);
}
int rectangle(){
   int width,height;
    int area;
    printf("\nenter the width:");
    scanf("%d",&width);
       printf("enter the height:");
    scanf("%d",&height);
    area=width*height;
    return area;
    
}
int main(){
    area_rec();
    int area;
    area=rectangle();
    printf("the area of rectangle is :%d\n",area);
    return 0;
}