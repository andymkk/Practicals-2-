// Week 4 - Activity 1: Sum of the first N natural numbers using a for loop (C version).
#include <stdio.h>

int main() {
    int n;
    int sum = 0;   // running total starts at 0

    printf("Enter a positive number (N): ");
    scanf("%d", &n);

    // for (start; condition; step)
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
