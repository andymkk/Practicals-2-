// Week 3 - Part 4 (final challenge): Grade Calculator for many students (C version).
// Uses a loop, then prints how many A's, B's, C's, D's and F's there were.
#include <stdio.h>

// Returns the letter grade for a percentage
char getGrade(double score) {
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 70) return 'C';
    if (score >= 60) return 'D';
    return 'F';
}

int main() {
    int numStudents;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    printf("How many students? ");
    scanf("%d", &numStudents);

    for (int i = 1; i <= numStudents; i++) {
        char name[50];
        double score;

        printf("\nStudent %d name: ", i);
        scanf(" %49[^\n]", name);   // leading space skips whitespace, reads a full line

        // Keep asking until the score is valid
        do {
            printf("Enter score (0-100): ");
            scanf("%lf", &score);
            if (score < 0 || score > 100) {
                printf("Invalid score! Try again.\n");
            }
        } while (score < 0 || score > 100);

        char grade = getGrade(score);
        printf("%s -> Grade %c\n", name, grade);

        // Count each grade
        switch (grade) {
            case 'A': countA++; break;
            case 'B': countB++; break;
            case 'C': countC++; break;
            case 'D': countD++; break;
            default:  countF++;
        }
    }

    printf("\n===== SUMMARY =====\n");
    printf("A: %d\n", countA);
    printf("B: %d\n", countB);
    printf("C: %d\n", countC);
    printf("D: %d\n", countD);
    printf("F: %d\n", countF);

    return 0;
}
