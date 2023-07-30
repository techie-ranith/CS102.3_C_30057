#include <stdio.h>

int main() {
    int number,digit;
    int sum=0;
    printf("Enter Number: ");
    scanf("%d",&number);
    while (number != 0) {
        digit = number % 10;
        printf("%d\n", digit);
        sum+=digit;
        number /= 10;
    }
    printf("Sum of each digit: %d",sum);
    return 0;
}
