#include<stdio.h>
int main(){
int maths;
int science;
int english;
int total;
float per;
printf("enter maths mark:");
scanf("%d",&maths);
printf("enter science mark:");
scanf("%d",&science);
printf("enter english mark:");
scanf("%d",&english);

total=maths+science+english;
printf("total marks %d\n",total);
per=total*100/300;
printf("persentage %f\n",per);

if(per>75){
	printf("grade A");
}
else if(per>60 && per<=75){
	printf("grade B");
}
else if(per>45 && per<=60){
	printf("grade C");
}
else if(per>35 && per<=45){
	printf("grade D");
}
else if(per>0 && per<=33){
	printf("you are failed");
}
else{
	printf("result not announced");
}
return 0;
}
