#include<stdio.h>
void area_traingle(){
    int height,base,area;
    printf("enter the height:");
    scanf("%d",&height);
       printf("enter the base:");
    scanf("%d",&base);
    area=height*base/2;
    printf("the area of traingle is :%d",area);
}
int traingle(){
    int height,base,area;
  printf("\nenter the height:");
    scanf("%d",&height);
       printf("enter the base:");
    scanf("%d",&base);
    area=height*base/2;
}
int main(){
   area_traingle();
    int area;
    area=traingle();
    printf("the area of traingle is :%d\n",area);
    return 0;
}