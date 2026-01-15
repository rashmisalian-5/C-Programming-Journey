#include <stdio.h>

int main() {
    int n;
    printf(" Enter a number to check whether it is odd or even: ");
    scanf("%d", &n);
    if (n%2==0){
        printf("\n %d is even.", n);
    }
    else{
        printf("\n %d is odd.", n);
    }
    return 0;
}
