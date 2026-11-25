// Week 8 - Activity 3: Evaluating class design.
// Compares a bad design (public data) with a good, encapsulated design.
#include <iostream>
using namespace std;

// BAD: everything is public, so anyone can set an impossible balance
class BadBankAccount {
public:
    double balance;

    BadBankAccount() {
        balance = 0.0;
    }
};

// GOOD: balance is private and only changed through validated methods
class GoodBankAccount {
private:
    double balance;

public:
    GoodBankAccount() {
        balance = 0.0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    cout << "--- Testing BAD Design ---" << endl;
    BadBankAccount badAccount;
    badAccount.balance = -5000;   // no protection!
    cout << "Bad Account Balance: " << badAccount.balance << endl;

    cout << "\n--- Testing GOOD Design ---" << endl;
    GoodBankAccount goodAccount;
    // goodAccount.balance = -5000;   // ERROR: balance is private
    goodAccount.deposit(1000);
    cout << "Good Account Balance: " << goodAccount.getBalance() << endl;

    return 0;
}
