// Week 2: Student Score Calculator (C version)
// Reads a student's name, course and 3 test scores, then prints a report card.
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
#define MAX_SCORE 100   // constant: maximum mark for one test

int main() {
    char studentName[MAX_LEN];
    char course[MAX_LEN];
    int score1, score2, score3;
    int totalScore;
    double average;
    double percentage;

    printf("========================================\n");
    printf(" STUDENT SCORE CALCULATOR\n");
    printf("========================================\n\n");

    // fgets for text (spaces allowed), scanf for numbers
    printf("Enter student name: ");
    fgets(studentName, MAX_LEN, stdin);
    studentName[strcspn(studentName, "\n")] = '\0';   // remove the newline

    printf("Enter course (BBIT/BCS): ");
    fgets(course, MAX_LEN, stdin);
    course[strcspn(course, "\n")] = '\0';

    printf("Enter score for Test 1: ");
    scanf("%d", &score1);
    printf("Enter score for Test 2: ");
    scanf("%d", &score2);
    printf("Enter score for Test 3: ");
    scanf("%d", &score3);

    // Challenge: input validation (scores must be 0 - 100)
    if (score1 < 0 || score1 > MAX_SCORE ||
        score2 < 0 || score2 > MAX_SCORE ||
        score3 < 0 || score3 > MAX_SCORE) {
        printf("Error: each score must be between 0 and %d.\n", MAX_SCORE);
        return 1;
    }

    // Calculations: 3.0 and 300.0 force decimal division
    totalScore = score1 + score2 + score3;
    average = totalScore / 3.0;
    percentage = (totalScore / 300.0) * 100;

    // Challenge: letter grade
    char grade;
    if (percentage >= 90)      grade = 'A';
    else if (percentage >= 80) grade = 'B';
    else if (percentage >= 70) grade = 'C';
    else if (percentage >= 60) grade = 'D';
    else                       grade = 'F';

    // Report card (%.2f prints 2 decimal places)
    printf("\n========================================\n");
    printf(" REPORT CARD\n");
    printf("========================================\n\n");
    printf("Student:    %s\n", studentName);
    printf("Course:     %s\n\n", course);
    printf("Test 1:     %d/%d\n", score1, MAX_SCORE);
    printf("Test 2:     %d/%d\n", score2, MAX_SCORE);
    printf("Test 3:     %d/%d\n\n", score3, MAX_SCORE);
    printf("Total:      %d/300\n", totalScore);
    printf("Average:    %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade:      %c\n\n", grade);

    if (percentage >= 50) {
        printf("Result:     PASS\n");
    } else {
        printf("Result:     FAIL\n");
    }
    printf("========================================\n");

    return 0;
}
