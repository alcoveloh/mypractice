#include <stdio.h>
int main(void) {
   int i;
   i = 0.99;
   if (i == 99 / 100) {
         printf("True\n");
   } else {
         printf("False\n");
   }
   return 0;
}


int main (void) {
   for (init; condition; increment) {
      statement(s);
   }

   while (condition) {
      statement(s);
      (increment);
   }

   do {
      statement(s);
      (increment);
   } while (condition);

