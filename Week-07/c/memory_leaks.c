// Week 7 - Activity 3: Memory leaks and free() (C version).
// createLeak() forgets to free its memory; fixLeak() frees it with free().
#include <stdio.h>
#include <stdlib.h>   // malloc, free

// BAD: memory from malloc is never freed (memory leak)
void createLeak() {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) return;
    *ptr = 42;
    printf("Inside function. The value is: %d\n", *ptr);
    printf("Memory allocated at address: %p\n", (void *)ptr);
    // missing: free(ptr);
}

// GOOD: every malloc has a matching free
void fixLeak() {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) return;
    *ptr = 42;
    printf("Inside fixed function. Value: %d\n", *ptr);
    printf("Memory allocated at address: %p\n", (void *)ptr);

    free(ptr);      // give the memory back
    ptr = NULL;     // avoid a dangling pointer
    printf("Memory has been successfully freed.\n");
}

int main() {
    printf("--- Memory leak (intentional) ---\n");
    createLeak();
    printf("Function finished. The memory is now leaked.\n\n");

    printf("--- Testing the Fix ---\n");
    fixLeak();

    return 0;
}
