#include <stdio.h>

int stringLength(const char *str) {
    const char *ptr = str; // Pointer to traverse the string
    int length = 0;

    // Traverse the string until the null terminator is encountered
    while (*ptr != '\0') {
        length++;
        ptr++; // Move the pointer to the next character
    }

    return length;
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character (if present) added by fgets
    char *newline = str;
    while (*newline != '\0') {
        if (*newline == '\n') {
            *newline = '\0';
            break;
        }
        newline++;
    }

    // Call the function to find the length
    int length = stringLength(str);

    // Display the result
    printf("The length of the string is: %d\n", length);

    return 0;
}
