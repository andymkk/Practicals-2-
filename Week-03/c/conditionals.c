// Week 3 - Part 1: Event Eligibility Checker (C version)
// Uses the logical operators &&, || and ! to build one complex condition.
#include <stdio.h>

int main() {
    int age;
    int hasTicket, isMember, isBanned;   // C flags: 1 = yes, 0 = no

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Do you have a ticket? (1 for yes, 0 for no): ");
    scanf("%d", &hasTicket);
    printf("Are you a member? (1 for yes, 0 for no): ");
    scanf("%d", &isMember);
    printf("Are you banned? (1 for yes, 0 for no): ");
    scanf("%d", &isBanned);

    // Eligible if: (18+ AND has ticket AND not banned) OR (member AND not banned)
    int canEnter = (age >= 18 && hasTicket && !isBanned) ||
                   (isMember && !isBanned);

    if (canEnter) {
        printf("You can enter the event!\n");
    } else {
        printf("Sorry, you cannot enter.\n");
    }

    return 0;
}
