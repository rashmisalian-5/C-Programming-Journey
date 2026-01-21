#include <stdio.h>

int main() {
    int size;
    int arr[size];
    printf("Enter the number of values in the array: ");
    scanf("%d", &size);
    for (int i=0; i<size; i++) {
        printf("\nEnter the %d value: ", i+1);
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    for (int i=1; i<size; i++) {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    printf("The largest value is: %d", largest);
    return 0;
}
