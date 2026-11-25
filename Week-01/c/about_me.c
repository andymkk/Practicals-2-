// Week 1: About Me (C version)
// Asks the user 6 questions, stores the answers and prints a profile summary.
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100   // maximum length of each answer

// Shows a prompt, reads one line (with spaces) and removes the trailing newline
void ask(const char *prompt, char *answer, int size) {
    printf("%s", prompt);
    fgets(answer, size, stdin);
    answer[strcspn(answer, "\n")] = '\0';
}

int main() {
    // In C, text is stored in char arrays
    char name[MAX_LEN];
    char course[MAX_LEN];
    char hobby[MAX_LEN];
    char reason[MAX_LEN];
    char expectation[MAX_LEN];
    char definition[MAX_LEN];

    printf("========================================\n");
    printf(" WELCOME TO YOUR FIRST C PROGRAM!\n");
    printf("========================================\n\n");

    ask("1. What is your name? ", name, MAX_LEN);

    // Challenge: simple validation for an empty name
    if (strlen(name) == 0) {
        printf("You didn't enter a name!\n");
        return 1;
    }

    ask("2. What course are you doing? (BBIT/BCS): ", course, MAX_LEN);
    ask("3. What is your hobby? ", hobby, MAX_LEN);
    ask("4. Why did you choose this course? ", reason, MAX_LEN);
    ask("5. What do you expect to learn in programming? ", expectation, MAX_LEN);
    ask("6. In your own words, what is programming? ", definition, MAX_LEN);

    // Display the summary
    printf("\n========================================\n");
    printf(" YOUR PROFILE SUMMARY\n");
    printf("========================================\n\n");
    printf("Name:           %s\n", name);
    printf("Course:         %s\n", course);
    printf("Hobby:          %s\n", hobby);
    printf("Reason:         %s\n", reason);
    printf("Expectation:    %s\n", expectation);
    printf("Programming is: %s\n\n", definition);
    printf("========================================\n");
    printf(" Great job, %s! You are on your way to becoming a programmer!\n", name);
    printf("========================================\n");

    return 0;
}
