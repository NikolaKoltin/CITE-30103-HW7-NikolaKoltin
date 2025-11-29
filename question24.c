#include <stdio.h>

// Function to compute square
int square(int x) {
    return x * x;
}

int main() {
    int (*funcPtr)(int); // function pointer
    int num;

    funcPtr = square; // assign function to pointer

    printf("Enter an integer: ");
    scanf("%d", &num);

    int result = funcPtr(num); // call function through pointer
    printf("Square of %d is %d\n", num, result);

    return 0;
}
