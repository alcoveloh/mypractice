#include <stdio.h>
int main(void) {
   int i, row, asterisk, spacing;

   printf("how many rows?:");
   scanf("%d", &row);

   for (i = 1; i <= row; i++) {
      for (spacing = i; spacing > 1; spacing--) {
         printf(" ");
      }
      for (asterisk = 1; asterisk <= (row - i)*2 + 1; asterisk++) {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}
