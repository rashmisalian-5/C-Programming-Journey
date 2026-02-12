#include <stdio.h>

int main() {
    int arr[]={2,5,4,1,3,6,8,76,89,11}; 
    int num, found=0;
    int size= sizeof(arr)/sizeof (arr[0]);
    printf("Enter a number to find in the array: ");
    scanf("%d", &num);
    for (int i=0; i<size; i++) {
        if (arr[i]==num) {
            printf("\nThe number %d is found at %d. ", num, i);
            found=1;
            break;
        }
    }
    if (found==0) {
        printf("\nThe number %d is not found. ", num);
    }
    return 0;
}
