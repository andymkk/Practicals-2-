// Week 5 - Activity 1: Pass-by-value (C version).
// swapByValue only swaps copies, so x and y stay the same.
// C has no references, so the fix (challenge) passes POINTERS instead.
#include <stdio.h>

// a and b are COPIES of the arguments
void swapByValue(int a, int b) {
    printf("  Inside function - Before swap: a = %d, b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("  Inside function - After swap:  a = %d, b = %d\n", a, b);
}

// a and b hold the ADDRESSES of the original variables
void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    printf("Before calling swapByValue:\n");
    printf("  x = %d, y = %d\n", x, y);

    swapByValue(x, y);

    printf("After calling swapByValue:\n");
    printf("  x = %d, y = %d\n", x, y);
    printf("\nExplanation: The function received COPIES of x and y.\n");
    printf("Changes made inside the function do not affect the originals.\n");

    // Challenge: fix the swap by passing addresses (&x, &y)
    swapByPointer(&x, &y);
    printf("\nAfter calling swapByPointer:\n");
    printf("  x = %d, y = %d\n", x, y);

    return 0;
}
