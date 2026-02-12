#include <stdio.h>

int main() {
    int num, n, found=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the values in the array: ");
    for (int j=0; j<n; j++) {
        scanf("%d", &arr[j]);
    }
    printf("Enter a number to find in the array: ");
    scanf("%d", &num);
    for (int i=0; i<n; i++) {
        if (arr[i]==num) {
            printf("\nThe number %d is found at index %d. ", num, i);
            found=1;
            break;
        }
    }
    if (found==0) {
        printf("\nThe number %d is not found. ", num);
    }
    return 0;
}
