// Week 4 - Activity 2: break and continue (C version).
// Prints 1-20, skips multiples of 3 (continue) and stops at 15 (break).
#include <stdio.h>

int main() {
    printf("Number filter: Skip multiples of 3, stop at 15\n");

    for (int i = 1; i <= 20; i++) {
        // break leaves the loop completely
        if (i == 15) {
            printf("\nBreaking at %d!", i);   // new line, then the message
            break;
        }

        // continue skips the rest of this iteration only
        if (i % 3 == 0) {
            continue;
        }

        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
