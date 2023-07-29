#include <stdio.h>

int main() {
    char input[100];
    int integerEquivalent;
    printf("Enter an input: ");
    scanf("%s", input);
    integerEquivalent = atoi(input);
    printf("Integer Equivalent: %d\n", integerEquivalent);
    return 0;
}
