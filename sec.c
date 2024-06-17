#include<stdio.h>
int main(){
int in;
int sec;
int min;
int hour;
printf("enter a second :");
scanf("%d",&in);
hour=in/3600;
min=(in-hour*3600)/60;
sec=in-(hour*3600+min*60);
printf("\ntotal hour:%d",hour);
printf("\ntotal min:%d",min);

printf("\n time: %d:%d:%d",hour,min,sec);

return 0;
}
