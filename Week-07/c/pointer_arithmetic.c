// Week 7 - Activity 1: Pointer arithmetic (C version).
// Walks through an array with a pointer instead of [ ] indexing.
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int *ptr = numbers;   // the array name is the address of its first element

    printf("Array elements accessed via pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Value: %d\n", *ptr);   // *ptr = value at the address
        ptr++;                         // move to the next int (4 bytes)
    }

    ptr = numbers;   // reset to the start

    printf("\nAccessing using offset arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Index %d has value: %d\n", i, *(ptr + i));   // same as numbers[i]
    }

    return 0;
}
