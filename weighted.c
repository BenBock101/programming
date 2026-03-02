#include <stdio.h>

// logic for weighted sum
float weightedAverage(float s1, float s2, float s3, float w1, float w2, float w3) {
    return (s1 * w1) + (s2 * w2) + (s3 * w3);
}
int main() {
    // input scores and weights
    float h_score = 85.0, h_weight = 0.40;
    float m_score = 78.0, m_weight = 0.25;
    float f_score = 92.0, f_weight = 0.35;
    // show step-by-step math
    printf("Homework: %.2f x %.2f = %.2f\n", h_score, h_weight, h_score * h_weight);
    printf("Midterm: %.2f x %.2f = %.2f\n", m_score, m_weight, m_score * m_weight);
    printf("Final Exam: %.2f x %.2f = %.2f\n", f_score, f_weight, f_score * f_weight);
    // get total from function
    float finalGrade = weightedAverage(h_score, m_score, f_score, h_weight, m_weight, f_weight);
    // print final result
    printf("Final Grade: %.2f\n", finalGrade);
    return 0;
}