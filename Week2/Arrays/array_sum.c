#include <stdio.h>

int main() {
    int arr[5],sum=0;
    for (int i=0; i<5; i++) {
        printf(" Enter %d value: ",i+1);
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<5; i++) {
        sum+=arr[i];
    }
    printf("\n The sum is: %d ",sum);
    return 0;
}
