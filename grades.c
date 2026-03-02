#include <stdio.h>

// function: getGrade
// takes an integer score 0-100 and returns a char representing the letter grade.
char getGrade(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        // scores from 0-59 go here
        return 'F';
    }
}
int main() {
    // test with the specified scores
    int scores[] = {95, 82, 74, 61, 45};
    int num_scores = sizeof(scores) / sizeof(scores[0]);
    for (int i = 0; i < num_scores; i++) {
        int current_score = scores[i];
        char grade = getGrade(current_score);
        printf("Score: %d -> Grade: %c\n", current_score, grade);
    }
    return 0;
}
