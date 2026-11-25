// Week 4 - Activity 3B: Input validation with a do-while loop (C version).
// The body always runs at least once, so the input is written only once.
#include <stdio.h>

int main() {
    int number = 0;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("Invalid! ");
        }
    } while (number <= 0);   // condition is checked AFTER the body

    printf("You entered: %d\n", number);

    return 0;
}
