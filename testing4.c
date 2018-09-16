#include <stdio.h>
int main(void) {
   int i, num, j, k, l, row, store;

   printf("how many numbers?: ");
   scanf("%d", &num);

   store = num;

   row = 0;
   for(l = 1; num > 0; l++) {
      num = num - l;
      row++;
   }
   printf("the number of rows is %d\n\n", row);

   for (i = 1; i <= row; i++) {
      for (j = 1; j <= i; j++) {
         k++;
         printf("%d ", k);
         if (k == store) {
            break;
         }
      }
      printf("\n");
   }
   return 0;
}

