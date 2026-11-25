// Week 3 - Part 4: Grade Calculator (C version)
// Converts a percentage into a letter grade with +/- and a message.
#include <stdio.h>

int main() {
    double score;
    char grade;
    char modifier = ' ';   // space means no modifier

    printf("===== GRADE CALCULATOR =====\n");
    printf("Enter percentage score (0-100): ");
    scanf("%lf", &score);   // %lf reads a double

    // Input validation
    if (score < 0 || score > 100) {
        printf("Invalid score! Must be between 0 and 100.\n");
        return 1;
    }

    // Base letter grade (multiple cut-offs)
    if (score >= 90)      grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else                  grade = 'F';

    // Plus / minus modifiers (not used for F)
    if (grade != 'F') {
        int lastDigit = (int)score % 10;
        if (grade == 'A') {
            if (score >= 97)     modifier = '+';
            else if (score < 93) modifier = '-';
        } else {
            if (lastDigit >= 7)      modifier = '+';
            else if (lastDigit <= 2) modifier = '-';
        }
    }

    // Display result
    printf("\nScore: %.1f%%\n", score);
    printf("Grade: %c", grade);
    if (modifier != ' ') printf("%c", modifier);
    printf("\n");

    // Message for each grade
    switch (grade) {
        case 'A': printf("Excellent work!\n"); break;
        case 'B': printf("Good job!\n"); break;
        case 'C': printf("Satisfactory.\n"); break;
        case 'D': printf("Needs improvement.\n"); break;
        default:  printf("Please seek help.\n");
    }

    return 0;
}
