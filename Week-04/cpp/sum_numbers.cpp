// Week 4 - Activity 1: Sum of the first N natural numbers using a for loop.
#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;   // running total starts at 0

    cout << "Enter a positive number (N): ";
    cin >> n;

    // for (start; condition; step)
    for (int i = 1; i <= n; i++) {
        sum += i;   // same as sum = sum + i
    }

    cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
