// Week 3 - Part 1: Event Eligibility Checker
// Uses the logical operators &&, || and ! to build one complex condition.
#include <iostream>
using namespace std;

int main() {
    int age;
    bool hasTicket, isMember, isBanned;

    cout << "Enter age: ";
    cin >> age;
    cout << "Do you have a ticket? (1 for yes, 0 for no): ";
    cin >> hasTicket;
    cout << "Are you a member? (1 for yes, 0 for no): ";
    cin >> isMember;
    cout << "Are you banned? (1 for yes, 0 for no): ";
    cin >> isBanned;

    // Eligible if: (18+ AND has ticket AND not banned) OR (member AND not banned)
    bool canEnter = (age >= 18 && hasTicket && !isBanned) ||
                    (isMember && !isBanned);

    if (canEnter) {
        cout << "You can enter the event!" << endl;
    } else {
        cout << "Sorry, you cannot enter." << endl;
    }

    return 0;
}
