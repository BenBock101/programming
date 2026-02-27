#include <stdio.h>

int main() {
    // loop starts at 10, drops by 1 each time, stops after 1
    for (int i = 10; i >= 1; i--) {
        printf("%d\n", i); // print current number
    }
    printf("Liftoff!\n"); // message after loop ends
    return 0; // exit program
}