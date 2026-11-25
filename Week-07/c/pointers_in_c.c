// Week 7 - Activity 2: Pointers in C (C version).
// C has no references, so two pointers to the same variable act as aliases.
#include <stdio.h>

int main() {
    int originalValue = 100;
    int *ptr1 = &originalValue;   // both pointers hold the same address
    int *ptr2 = &originalValue;

    printf("--- Initial State ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("Value via ptr1: %d\n", *ptr1);

    // Changing through ptr1 changes the original
    *ptr1 = 200;
    printf("\n--- After setting *ptr1 = 200 ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("Value via ptr2: %d\n", *ptr2);

    // Changing through ptr2 changes the original
    *ptr2 = 300;
    printf("\n--- After setting *ptr2 = 300 ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("Value via ptr1: %d\n", *ptr1);

    // A pointer can be re-pointed to another variable
    int anotherValue = 500;
    ptr1 = &anotherValue;
    printf("\n--- After pointing ptr1 to anotherValue ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("Value via ptr1: %d\n", *ptr1);

    return 0;
}
