// Week 5 - Activity 3: Two recursive factorial solutions (C version).
// Simple recursion vs tail recursion (accumulator).
#include <stdio.h>

// Simple recursion: n! = n * (n-1)!   (base case: n <= 1)
long long factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

// Tail recursion: the running product is carried in 'accumulator'
// (C has no default arguments, so we must always pass it)
long long factorialTail(int n, long long accumulator) {
    if (n <= 1) {
        return accumulator;
    }
    return factorialTail(n - 1, n * accumulator);
}

int main() {
    int num;

    printf("Enter a number to calculate factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    if (num > 20) {   // 21! is too big for a long long
        printf("Number too large (maximum is 20).\n");
        return 1;
    }

    printf("\nUsing simple recursion:\n");
    printf("  %d! = %lld\n", num, factorialRecursive(num));

    printf("\nUsing tail recursion:\n");
    printf("  %d! = %lld\n", num, factorialTail(num, 1));

    printf("\n--- Comparison ---\n");
    printf("Simple recursion: Clear, matches mathematical definition.\n");
    printf("Tail recursion: More efficient for large n (compiler optimization).\n");

    return 0;
}
