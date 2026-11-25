// Week 6 - Activity 3: C-string (char array) version (C version).
// C has no std::string, so strings are char arrays handled with <string.h>.
#include <stdio.h>
#include <string.h>

int main() {
    char name[50];   // fixed maximum size

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);       // reads a full line
    name[strcspn(name, "\n")] = '\0';       // remove the newline

    printf("Name: %s\n", name);
    printf("Length: %zu\n", strlen(name));
    printf("First character: %c\n", name[0]);

    char copy[50];
    strcpy(copy, name);                     // copying needs strcpy
    printf("Copy: %s\n", copy);

    // Joining strings needs strcat (and enough space in the array)
    char greeting[100] = "Hello, ";
    strcat(greeting, name);
    strcat(greeting, "!");
    printf("%s\n", greeting);

    return 0;
}
