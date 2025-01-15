#include <stdio.h>
int stringLength(const char *str) {
   const char *ptr = str;
   while (*ptr != '\0') {
       ptr++;
   }
   return ptr - str;
}
int main() {
   const char str[] = "Hello, World!";
   printf("The length of the string is: %d\n", stringLength(str));
   return 0;
}
