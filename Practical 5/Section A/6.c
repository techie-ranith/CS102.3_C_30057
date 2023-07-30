#include <stdio.h>

int main() {
    int num = 0, pow = 0;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Enter Power: ");
    scanf("%d", &pow);
    
    int result = 1;
    for (; pow >= 1; pow--) {
        result *= num;
    }
    
    printf("Value: %d\n", result);
    return 0;
}
