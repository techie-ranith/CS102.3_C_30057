#include <stdio.h>

int main(){
    int num1,num2,a;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("First number before swaping: %d\n",num1);
    printf("Second number before swapping: %d\n",num2);
    a = num1;
    num1 = num2;
    num2 = a;
    printf("First number after swapping: %d\n",num1);
    printf("Second number after swapping: %d\n",num2);
}
