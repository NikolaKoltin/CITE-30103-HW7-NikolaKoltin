#include <stdio.h>

int max3(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
    int x, y, z;
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);

    int largest = max3(x, y, z);
    printf("The largest number is: %d\n", largest);

    return 0;
}
