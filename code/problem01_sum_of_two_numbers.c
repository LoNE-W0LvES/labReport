// Problem 1: Sum of Two Numbers
// Objective: Write a program to add two integers and display the result.

#include <stdio.h>
int main() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
    return 0;
}
