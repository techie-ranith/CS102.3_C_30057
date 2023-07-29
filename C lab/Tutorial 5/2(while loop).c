#include <stdio.h>

int main() {
    int num = 0, even = 0, odd = 0;
    printf("Enter numbers (terminate with -99):\n");
    while (1) {
        printf("Enter number: ");
        scanf("%d", &num);
        if (num == -99) {
            break;
        }
        if (num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Number of Even numbers: %d\n", even);
    printf("Number of Odd numbers: %d\n", odd);
    return 0;
}
