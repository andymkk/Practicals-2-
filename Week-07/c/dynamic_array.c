// Week 7 - Activity 4: Dynamic array (mini-vector) (C version).
// When the array is full it doubles its capacity, copies the data and frees the old array.
#include <stdio.h>
#include <stdlib.h>

// A struct groups the pointer, size and capacity (C has no classes)
struct DynamicArray {
    int *data;
    int size;
    int capacity;
};

void initArray(struct DynamicArray *arr, int initialCapacity) {
    arr->capacity = initialCapacity;
    arr->size = 0;
    arr->data = (int *)malloc(arr->capacity * sizeof(int));
}

// No destructors in C, so we free the memory by calling this ourselves
void destroyArray(struct DynamicArray *arr) {
    free(arr->data);
    arr->data = NULL;
}

void pushBack(struct DynamicArray *arr, int value) {
    // Full? Make a bigger array
    if (arr->size == arr->capacity) {
        int newCapacity = arr->capacity * 2;
        int *newData = (int *)malloc(newCapacity * sizeof(int));

        for (int i = 0; i < arr->size; i++) {   // copy old elements
            newData[i] = arr->data[i];
        }

        free(arr->data);                        // free the old array
        arr->data = newData;
        printf("[Resized capacity from %d to %d]\n", arr->capacity, newCapacity);
        arr->capacity = newCapacity;
    }

    arr->data[arr->size] = value;
    arr->size++;
}

void display(struct DynamicArray *arr) {
    printf("Array (Size: %d, Capacity: %d): ", arr->size, arr->capacity);
    for (int i = 0; i < arr->size; i++) {
        printf("%d ", arr->data[i]);
    }
    printf("\n");
}

int main() {
    struct DynamicArray myArray;
    initArray(&myArray, 2);
    printf("Created dynamic array with capacity 2.\n");

    pushBack(&myArray, 10);
    pushBack(&myArray, 20);
    display(&myArray);

    printf("\nAdding third element...\n");
    pushBack(&myArray, 30);   // triggers a resize
    display(&myArray);

    printf("\nAdding fourth and fifth elements...\n");
    pushBack(&myArray, 40);
    pushBack(&myArray, 50);   // triggers another resize
    display(&myArray);

    destroyArray(&myArray);   // clean up
    return 0;
}
