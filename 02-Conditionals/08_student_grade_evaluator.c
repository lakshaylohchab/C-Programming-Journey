// File: 08_student_grade_evaluator.c
// Purpose: Evaluate pass/fail across 5 subjects and assign a letter grade based on percentage
// Sample Input: Marks out of 100 for 5 subjects

#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, percentage;
    int pass = 1;

    printf("Enter marks for 5 subjects (out of 100): ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Check individual pass criteria (e.g., minimum 35 marks per subject)
    if (m1 < 35 || m2 < 35 || m3 < 35 || m4 < 35 || m5 < 35) {
        pass = 0;
    }

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("\n--- Academic Evaluation Report ---\n");
    printf("Total Marks    : %.2f / 500\n", total);
    printf("Percentage     : %.2f%%\n", percentage);

    if (!pass) {
        printf("Status         : FAIL (Scored below 35 in one or more subjects)\n");
    } else {
        printf("Status         : PASS\n");
        printf("Grade Awarded  : ");
        if (percentage >= 90) printf("A+ (Outstanding)\n");
        else if (percentage >= 80) printf("A (Excellent)\n");
        else if (percentage >= 70) printf("B (Good)\n");
        else if (percentage >= 60) printf("C (Average)\n");
        else if (percentage >= 50) printf("D (Pass)\n");
        else printf("E (Needs Improvement)\n");
    }

    return 0;
}
