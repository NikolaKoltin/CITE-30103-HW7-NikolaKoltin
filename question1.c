#include <stdio.h>

float toCelsius(float f) {
    return (f - 32) * 5 / 9;
}

int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    float c = toCelsius(f);
    printf("Temperature in Celsius: %.2f\n", c);

    return 0;
}
