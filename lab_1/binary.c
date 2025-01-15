#include <stdio.h>

void printBinary(int number) {
    int binary[32]; 
    int index = 0; 

    // Handle special case for 0
    if (number == 0) {
        printf("0\n");
        return;
    }

  
    while (number > 0) {
        binary[index++] = number % 2; 
        number = number / 2;          
    }

 
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int num;

 
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    
    printf("Binary representation of %d is: ", num);
    printBinary(num);

    return 0;
}

