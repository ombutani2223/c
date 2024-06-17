#include<stdio.h>
void area_square(){
    int side,area;
    printf("enter the side:");
    scanf("%d",&side);
    area=side*side;
    printf("the area of square is :%d",area);
}
int square(){
  int side,area;
    printf("\nenter a side:");
    scanf("%d",&side);
 area=side*side;
  return area;
    
}
int main(){
    area_square();
    int area;
    area=square();
    printf("the area of square is :%d\n",area);
    return 0;
}