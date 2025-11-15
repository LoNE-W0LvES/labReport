// Problem 7: Reverse a Number
// Objective: Take an integer as input and print its reverse.

#include <stdio.h>
int main() {
    int num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    printf("Reverse of %d = %d\n", num, rev);
    return 0;
}
