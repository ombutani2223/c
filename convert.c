#include <stdio.h>  
int main ()  
{  
char c;

   
    printf (" Enter the charcter: ");  
    scanf (" %c", &c);  
   
      if(c>=65&&c<=90){
	  printf (" %c", c+32); 
	  }
	  else{
	  printf (" %c", c-32);
	  }

      
    return 0;  
}