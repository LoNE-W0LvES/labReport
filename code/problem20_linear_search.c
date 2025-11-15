// Problem 20: Search in Array (Linear Search)
// Objective: Search for an element in an array and print its position.

#include <stdio.h>
int main() {
    int n, search, found = -1;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("Element %d found at position %d\n", search, found + 1);
    else
        printf("Element %d not found\n", search);
    return 0;
}
