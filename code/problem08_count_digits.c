// Problem 8: Count Digits
// Objective: Count the number of digits in a given integer.

#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    if (temp == 0)
        count = 1;
    else {
        while (temp != 0) {
            count++;
            temp /= 10;
        }
    }
    printf("Number of digits in %d = %d\n", num, count);
    return 0;
}
