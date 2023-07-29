#include <stdio.h>

int main() {
    int array1[10] = {0};
    int i, max = 0, min = 0;
    float mark = 0, total = 0;

    for (i = 0; i <= 9; i++) {
        printf("Enter mark: ");
        scanf("%f", &mark);
        total += mark;
        array1[i] = mark;
    }

    max = array1[0];
    min = array1[0];

    for (i = 0; i <= 9; i++) {
        if (array1[i] >= max) {
            max = array1[i];
        } else {
            max = max;
        }
    }

    for (i = 0; i <= 9; i++) {
        if (array1[i] <= min) {
            min = array1[i];
        } else {
            min = min;
        }
    }

    printf("Maximum mark: %d\n", max);
    printf("Minimum mark: %d\n", min);
    printf("Total: %.2f\n", total);
    printf("Average: %.2f", total / 10);

    return 0;
}
