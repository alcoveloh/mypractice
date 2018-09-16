#include <stdio.h>
int main(void) {
   int i, row, spacing, asterisk, mid, mid2, j;

   printf("How many rows do you want?:");
   scanf("%d", &row);
   mid = (row - 1)/2 + 1;
   mid2 = (row / 2);

   for (i=1; i <= mid; i++) {
      for (spacing = mid - i; spacing >= 1; spacing--) {
         printf(" ");
      }
      for (asterisk = 1; asterisk <= i*2 - 1; asterisk++) {
         printf("*");
      }
      printf("\n");
   }
   for (j = 1; j <= mid2; j++) {
      for (spacing = j; spacing >= 1; spacing--) {
         printf(" ");
      }
      for (asterisk = 1; asterisk <= (mid2 - j)*2 +1; asterisk++) {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}
