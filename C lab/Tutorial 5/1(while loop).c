#include <stdio.h>

int main() {
    int num = 0, even = 0, odd = 0;
    int i;

    do {
        printf("Enter number: ");
        scanf("%d", &i);

        if (i % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    } while (i < 10);

    printf("Number of Even numbers: %d\n", even);
    printf("Number of Odd numbers: %d", odd);
    return 0;
}
