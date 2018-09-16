#include <stdio.h>
int main(void) {
   int i, num, sum;

   printf("what number you want as the limit?: ");
   scanf("%d", &num);

   sum = 0;
   i = 1;
   while(i <= num) {
      if (i % 3 == 0 || i % 5 == 0) {
         sum = sum + i;
      }
      i++;
   }
   printf("the sum is %d\n", sum);
   return 0;
}




