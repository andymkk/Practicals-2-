// Week 10 - Activity 3: Return codes and stderr (C version).
// C has no try/catch, so errors are reported with return values and stderr.
#include <stdio.h>
#include <errno.h>    // errno
#include <string.h>   // strerror

// Returns 0 on success, 1 on failure
int readFileWithReturnCode(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        // stderr is the separate error stream; strerror explains the error
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));
        return 1;
    }
    fclose(file);
    return 0;
}

int main() {
    printf("--- Testing Return Code Strategy ---\n");
    if (readFileWithReturnCode("data.txt") == 1) {   // we must remember to check
        printf("Main function: Handled error gracefully. Program continues.\n");
    }

    printf("\n--- Evaluation ---\n");
    printf("In C, we must manually check return codes.\n");
    printf("If the programmer forgets to check, the program might crash later.\n");

    return 0;
}
