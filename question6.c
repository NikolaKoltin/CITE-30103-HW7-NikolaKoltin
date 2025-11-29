#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int sum = 0;
    float avg;

    printf("Enter the number of integers (max 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid input. Please enter a number between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
