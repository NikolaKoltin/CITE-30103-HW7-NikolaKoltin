#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    float sum = 0.0;

    printf("Enter number of integers: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Average: %.2f\n", sum / n);

    free(arr); // free the allocated memory

    return 0;
}
