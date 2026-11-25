// Week 4 - Activity 4: Multiplication table (1 to 10) using nested loops (C version).
#include <stdio.h>

int main() {
    printf("========================================\n");
    printf("     MULTIPLICATION TABLE (1 to 10)\n");
    printf("========================================\n\n");

    // Outer loop = rows, inner loop = columns
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%5d", i * j);   // %5d = width of 5 (like setw(5))
        }
        printf("\n");   // new line after each row
    }

    printf("========================================\n");

    return 0;
}
