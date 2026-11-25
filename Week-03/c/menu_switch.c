// Week 3 - Part 3B: The same menu using a switch statement (C version).
// Easier to read and extend for fixed menu options (remember each break).
#include <stdio.h>

int main() {
    int choice;

    printf("Menu:\n1. Start\n2. Load\n3. Settings\n4. Exit\nChoice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Starting game...\n");
            break;
        case 2:
            printf("Loading game...\n");
            break;
        case 3:
            printf("Opening settings...\n");
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
