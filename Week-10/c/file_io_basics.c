// Week 10 - Activity 1: Basic file I/O (C version).
// Reads numbers from numbers.txt, adds them up and writes the total to sum.txt.
#include <stdio.h>

int main() {
    FILE *inputFile = fopen("numbers.txt", "r");   // "r" = read

    // fopen returns NULL if the file cannot be opened
    if (inputFile == NULL) {
        printf("Error: Could not open numbers.txt for reading!\n");
        return 1;
    }

    int num;
    int sum = 0;

    printf("Reading numbers from file...\n");
    while (fscanf(inputFile, "%d", &num) == 1) {   // 1 = one number read successfully
        printf("Read: %d\n", num);
        sum += num;
    }
    fclose(inputFile);

    printf("Total Sum: %d\n", sum);

    FILE *outputFile = fopen("sum.txt", "w");      // "w" = write (overwrites)
    if (outputFile == NULL) {
        printf("Error: Could not create sum.txt for writing!\n");
        return 1;
    }

    fprintf(outputFile, "The total sum is: %d\n", sum);
    fprintf(outputFile, "Calculated automatically by the C program.\n");
    fclose(outputFile);

    printf("Result successfully saved to sum.txt!\n");

    return 0;
}
