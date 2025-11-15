// Problem 14: Palindrome Number
// Objective: Check if a given number is a palindrome.

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
    if (num == rev)
        printf("%d is a Palindrome\n", num);
    else
        printf("%d is Not a Palindrome\n", num);
    return 0;
}
