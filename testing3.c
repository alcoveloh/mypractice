#include <stdio.h>
int main(void) {
   int i, row, j, num;

   printf("how many rows?: ");
   scanf("%d", &row);

   for(i = 1; i <= row; i++) {
      for (j = i; j <= row; j++) {
         num = row - i + 1 ;
         printf("%d ", num);
      }
      printf("\n");
   }
   return 0;
}

