#include <stdio.h>
#include <ctype.h>

int main() {
    char str[101]; 
    int i = 0, wordCount = 0;
    int inWord = 0;

    printf("Enter a line of text (up to 100 chars):\n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (!isspace(str[i])) {
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
        i++;
    }

    printf("Number of words: %d\n", wordCount);

    return 0;
}
