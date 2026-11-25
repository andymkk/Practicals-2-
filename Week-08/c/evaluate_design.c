// Week 8 - Activity 3: Evaluating struct design (C version).
// Compares a bad design (data changed directly) with a good one (changed through a function).
#include <stdio.h>

// BAD: members are public, so anyone can set an impossible balance
struct BadBankAccount {
    double balance;
};

// GOOD: the balance should only be changed through functions that validate
struct GoodBankAccount {
    double balance;
};

void goodDeposit(struct GoodBankAccount *acc, double amount) {
    if (amount > 0) {
        acc->balance += amount;
    }
}

int main() {
    printf("--- Testing BAD Design ---\n");
    struct BadBankAccount badAccount;
    badAccount.balance = -5000;   // no protection!
    printf("Bad Account Balance: %.2f\n", badAccount.balance);

    printf("\n--- Testing GOOD Design ---\n");
    struct GoodBankAccount goodAccount;
    goodAccount.balance = 0.0;
    goodDeposit(&goodAccount, 1000);   // use the safe function
    printf("Good Account Balance: %.2f\n", goodAccount.balance);

    return 0;
}
