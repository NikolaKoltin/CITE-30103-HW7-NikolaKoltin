#include <stdio.h>
#include <ctype.h>

int main() {
    char str[101]; // up to 100 chars
    int vowels = 0, consonants = 0, digits = 0;

    printf("Enter a line of text (up to 100 chars):\n");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (isdigit(ch)) {
            digits++;
        } else if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);

    return 0;
}
