#include <stdio.h>

int main() {
    int temps[5] = {45, 62, 78, 55, 90}; // store 5 temperatures in an array
    // loop through each element in the array
    for (int i = 0; i < 5; i++) {
        printf("Day %d: %d degrees - ", i + 1, temps[i]); // print day and temp
        // check temperature ranges to categorize the weather
        if (temps[i] >= 80) {
            printf("Hot!\n");
        } else if (temps[i] >= 60) {
            printf("Nice.\n");
        } else {
            printf("Cold.\n");
        }
    }
    return 0; // exit successfully
}