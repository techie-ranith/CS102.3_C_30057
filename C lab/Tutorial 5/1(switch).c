#include <stdio.h>

// switch

int main(){
    int num1,num2;
    char c;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&num1, &num2);
    printf("1. + \n 2. - \n 3. *\n 4. /\n");
    printf("Please enter your choice: ");
    scanf("%c",c);
    switch('c'){
        case '+':
            printf("Value: %d", num1+num2);
            break;
        case '-':
            printf("Value: %d", num1-num2);
            break;
        case '*':
            printf("Value: %d", num1*num2);
            break;
        case '/':
            printf("Value: %d", num1/num2);
            break;
    }
}
