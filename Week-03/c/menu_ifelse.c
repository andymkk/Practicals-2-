// Week 3 - Part 3A: Menu using an if-else chain (C version).
#include <stdio.h>

int main() {
    int choice;

    printf("Menu:\n1. Start\n2. Load\n3. Settings\n4. Exit\nChoice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Starting game...\n");
    } else if (choice == 2) {
        printf("Loading game...\n");
    } else if (choice == 3) {
        printf("Opening settings...\n");
    } else if (choice == 4) {
        printf("Exiting...\n");
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
