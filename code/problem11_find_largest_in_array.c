// Problem 11: Find Largest in Array
// Objective: Write a program to find the largest element in an array of integers.

#include <stdio.h>
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }
    printf("Largest element = %d\n", largest);
    return 0;
}
