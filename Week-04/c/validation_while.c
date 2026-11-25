// Week 4 - Activity 3A: Input validation with a while loop (C version).
// The first input must be read BEFORE the loop (code is repeated).
#include <stdio.h>

int main() {
    int number;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    // Condition is checked first, so the body may run zero times
    while (number <= 0) {
        printf("Invalid! Please enter a positive number: ");
        scanf("%d", &number);
    }

    printf("You entered: %d\n", number);

    return 0;
}
