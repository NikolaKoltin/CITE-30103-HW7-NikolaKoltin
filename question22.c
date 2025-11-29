#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;

    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i); // input using pointer arithmetic
    }

    printf("You entered: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); // print using pointer arithmetic
    }
    printf("\n");

    return 0;
}
