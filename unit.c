

#include<stdio.h>
int main(){
	
int unit;
float total=0;

printf("enter unit:");
scanf("%d",&unit);

if(unit<=100){
total=unit*0.60+50;
}
else if(unit>100 && unit<=200){
total=unit*0.80+50;
}
else if(unit>200 && unit<=300){
total=unit*0.90+50;
}
else{
	printf("bill fail");
}
if(total>300){
total=15*total/100+total;
printf("total bill: %f",total);
}
else{
	printf("total bill: %f",total);
}

return 0;
}
