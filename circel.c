#include<stdio.h>
void area_circle(){
    float pi=3.14;
    float radius,area;
    printf("enter a radius:");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("the area of circle is :%f",area);
}
float circle(){
      float pi=3.14;
    float radius,area;
    printf("\nenter a radius:");
    scanf("%f",&radius);
    area=pi*radius*radius;
  return area;
    
}
int main(){
    area_circle();
    float area;
    area=circle();
    printf("the area of circle is :%f\n",area);
    return 0;
}