#include <stdio.h>

int main() {
    char name[] = "Ben"; // store a string
    int age = 18;        // store a whole number
    float gpa = 5.0;     // store a decimal number
    printf("Name: %s\n", name);  // print string using %s
    printf("Age: %d\n", age);    // print integer using %d
    printf("GPA: %.1f\n", gpa);  // print float to 1 decimal place
    return 0; // exit program
}