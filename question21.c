#include <stdio.h>

int main() {
    int num;
    int *ptr;

    printf("Enter an integer: ");
    scanf("%d", &num);

    ptr = &num; // pointer points to num

    printf("\nVariable value: %d\n", num);
    printf("Variable address: %p\n", (void*)&num);
    printf("Dereferenced pointer value: %d\n", *ptr);

    return 0;
}
