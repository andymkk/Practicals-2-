// Week 6 - Activity 1: Linear search in an integer array (C version).
// Returns the index of the target, or -1 if it is not found.
#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;   // found: return the position straight away
        }
    }
    return -1;          // checked every element, not found
}

int main() {
    int numbers[8] = {15, 42, 7, 89, 23, 56, 11, 74};
    int size = sizeof(numbers) / sizeof(numbers[0]);   // number of elements
    int target;

    printf("Array contents: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Enter a number to search: ");
    scanf("%d", &target);

    int position = linearSearch(numbers, size, target);

    if (position != -1) {
        printf("Element found at index: %d\n", position);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
