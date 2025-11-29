#include <stdio.h>

// Recursive function
long factorial(int n) {
    if (n < 0) return -1; // Error for negative numbers
    if (n == 0 || n == 1) return 1; // Base case
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    long result = factorial(n);
    if (result == -1)
        printf("Error: factorial is not defined for negative numbers.\n");
    else
        printf("%d! = %ld\n", n, result);

    return 0;
}
