#include <stdio.h>
int main(void) {
   int i, j, row;

   printf("how many rows? ");
   scanf("%d", &row);

   for (i = 1; i <= row; i++) {
      for (j = 1; j <= i; j++) {
         printf("%d ", i);
      }
      printf("\n");
   }
   return 0;
}
