#include <stdio.h>
#include <string.h>

int main(){
    float n1, n2;
    char symbol[2];
    printf("\nEnter First Number: ");
    scanf("%f", &n1);
    printf("Select the Calculation Operator: \n");
    printf("+, -, /, * : \n");
    scanf("%s", symbol);
    printf("Enter Second Number: ");
    scanf("%f", &n2);
    if (strcmp(symbol, "+") == 0){
        printf("%.2f", n1 + n2);
    }
    else if (strcmp(symbol, "-") == 0){
        printf("%.2f", n1 - n2);
    }else if (strcmp(symbol, "/") == 0){
        printf("%.2f", n1 / n2);
    }
    else{
        printf("%.2f", n1 * n2);
    }
}
