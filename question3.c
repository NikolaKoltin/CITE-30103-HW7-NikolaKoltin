#include <stdio.h>

// check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // divisible -> not prime
    }
    return 1; // prime
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
