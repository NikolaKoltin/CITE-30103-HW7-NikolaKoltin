#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string (no spaces): ");
    scanf("%s", str);

    // Compute length manually
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
