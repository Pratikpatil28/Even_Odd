#include <stdio.h>
int main() {
    printf("***** Program to Find odd/even *****\n");
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // True if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("\n %d is even.", num);
    else
        printf("\n %d is odd.", num);
    
    return 0;
}