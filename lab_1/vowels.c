#include <stdio.h>
#include <ctype.h>

void countVowelsAndConsonants(const char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;

    // Traverse the string using a pointer
    while (*str != '\0') {
        char ch = tolower(*str); // Convert character to lowercase for uniformity

        if (ch >= 'a' && ch <= 'z') { // Check if the character is a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        str++; // Move the pointer to the next character
    }
}

int main() {
    char str[100];
    int vowels, consonants;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Call the function to count vowels and consonants
    countVowelsAndConsonants(str, &vowels, &consonants);

    // Display the results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
