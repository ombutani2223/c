
#include<stdio.h>
#include<string.h>
int main(){
int t=1;
char name[50];
gets(name);
for(int i=1; name[i]!='\0';i++){

t++;
}
for(int i=0; name[i]!='\0';i++){
    printf("%c",name[t-i-1]);
}

}