#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, isPalindrome = 1;

    printf("Enter a word (no spaces): ");
    scanf("%s", str);

    // Compute length
    length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Check for palindrome
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
