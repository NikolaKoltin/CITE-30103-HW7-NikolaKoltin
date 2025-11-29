#include <stdio.h>

int main() {
    char str1[201], str2[101]; // str1 should be large enough to hold both
    int i = 0, j = 0;

    printf("Enter the first string (no spaces): ");
    scanf("%s", str1);

    printf("Enter the second string (no spaces): ");
    scanf("%s", str2);

    // Find the end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // Append str2 to str1 manually
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}
