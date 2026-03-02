#include <stdio.h>

// function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    // formula: C = (F - 32) * 5.0 / 9.0
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}
int main() {
    // test values
    float temps[] = {32.0, 212.0, 72.0, 98.6};
    int i;
    for (i = 0; i < 4; i++) {
        float f = temps[i];
        float c = fahrenheitToCelsius(f);
        // print result formatted to 2 decimal places
        printf("%.2f F = %.2f C\n", f, c);
    }
    return 0;
}
