#include <stdio.h>

int main() {
    int num = 7; // set the number to check
    printf("Number: %d ", num); 
    // check if number is positive/negative or zero
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
    // use modulo to check for it/even or odd
    if (num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    return 0; // exit program
}
