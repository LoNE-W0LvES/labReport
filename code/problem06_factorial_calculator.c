// Problem 6: Factorial Calculator
// Objective: Calculate factorial of a number using a loop.

#include <stdio.h>
int main() {
    int num;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    printf("Factorial of %d = %lld\n", num, fact);
    return 0;
}
