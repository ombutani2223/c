#include <stdio.h>

int fibo(int n) {
   if(n == 1||n == 0){
      return 1;
   }
   else{
      return (fibo(n-1) + fibo(n-2));
   }
}

int main() {
   int n,i;
   printf("Enter the number of terms\n");
   scanf("%d", &n);

   printf("Fibonacci Series: ");
   
   for (i = 0; i < n; i++) {
      printf("%d ", fibo(i));
   }
   
   return 0;
}