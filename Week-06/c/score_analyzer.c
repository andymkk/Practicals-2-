// Week 6 - Activity 4: Student Score Analyzer (C version).
// Reads 10 scores into an array, finds the average and lists scores above it.
#include <stdio.h>

#define SIZE 10

double calculateAverage(int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return (double)sum / size;   // cast so the division keeps decimals
}

void displayAboveAverage(int scores[], int size, double average) {
    printf("\nScores above average (%.2f):\n", average);
    int found = 0;   // 0 = none found yet

    for (int i = 0; i < size; i++) {
        if (scores[i] > average) {
            printf("  Score %d at position %d\n", scores[i], i + 1);
            found = 1;
        }
    }

    if (!found) {
        printf("  None\n");
    }
}

int main() {
    int scores[SIZE];

    printf("Enter %d student scores:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    double average = calculateAverage(scores, SIZE);

    printf("\n--- Results ---\n");
    printf("Average score: %.2f\n", average);

    displayAboveAverage(scores, SIZE, average);

    return 0;
}
