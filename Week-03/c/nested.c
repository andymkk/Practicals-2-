// Week 3 - Part 2: Nested Conditionals (C version)
// Orders three numbers using nested if-else; there are 6 possible paths.
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (b > c) {
            printf("Path 1: a > b > c\n");
        } else {
            if (a > c) {
                printf("Path 2: a > c > b\n");
            } else {
                printf("Path 3: c > a > b\n");
            }
        }
    } else {
        if (a > c) {
            printf("Path 4: b > a > c\n");
        } else {
            if (b > c) {
                printf("Path 5: b > c > a\n");
            } else {
                printf("Path 6: c > b > a\n");
            }
        }
    }

    return 0;
}
