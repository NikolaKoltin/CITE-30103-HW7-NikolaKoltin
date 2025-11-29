#include <stdio.h>

int main() {
    int arr[100];
    int n, evenCount = 0, oddCount = 0;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid input. Please enter a number between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Even numbers = %d\n", evenCount);
    printf("Odd numbers = %d\n", oddCount);

    return 0;
}
