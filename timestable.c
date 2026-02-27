#include <stdio.h>

int main() {
    int num; // declare variable for input
    printf("Enter a number: "); // ask user for input
    scanf("%d", &num); // store input in num
    // loop from 1 to 10
    for (int i = 1; i <= 10; i++) {
        int result = num * i; // calculate product
        printf("%d x %d = %d\n", num, i, result); // print the row
    }
    return 0; // exit successfully
}
