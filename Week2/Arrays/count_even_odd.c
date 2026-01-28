#include <stdio.h>

int main() {
    int sum_even=0, sum_odd=0;
    int arr[5];
    printf("Enter any five numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<5; i++) {
        if (arr[i] % 2 == 0) {
            sum_even+=1;
        }
        else {
            sum_odd+=1;
        }
    }
    printf("The number of even terms are %d and odd terms are %d.", sum_even, sum_odd);
    return 0;
}    
