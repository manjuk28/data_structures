#include <stdio.h> 
void addition();
void subtraction();
void multiplication();
void division();
 
int main() {
   int choice;
 
   do {
       
       printf("\nMenu:\n");
       printf("1. Addition\n");
       printf("2. Subtraction\n");
       printf("3. Multiplication\n");
       printf("4. Division\n");
       printf("5. Exit\n");
       printf("Enter your choice: ");
       scanf("%d", &choice);
 
     
       switch (choice) {
           case 1:
               addition();
               break;
           case 2:
               subtraction();
               break;
           case 3:
               multiplication();
               break;
           case 4:
               division();
               break;
           case 5:
               printf("Exiting the program.\n");
               break;
           default:
               printf("Invalid choice. Please try again.\n");
       }
   } while (choice != 5);
 
   return 0;
}
 
 
void addition() {
   double a, b;
   printf("Enter two numbers: ");
   scanf("%lf %lf", &a, &b);
   printf("Result: %.2lf\n", a + b);
}
 void subtraction() {
   double a, b;
   printf("Enter two numbers: ");
   scanf("%lf %lf", &a, &b);
   printf("Result: %.2lf\n", a - b);
}
 
 
void multiplication() {
   double a, b;
   printf("Enter two numbers: ");
   scanf("%lf %lf", &a, &b);
   printf("Result: %.2lf\n", a * b);
}
 
 
void division() {
   double a, b;
   printf("Enter two numbers: ");
   scanf("%lf %lf", &a, &b);
   if (b != 0) {
       printf("Result: %.2lf\n", a / b);
   } else {
       printf("Error: Division by zero is not allowed.\n");
   }
