#include <stdio.h>

int main(){
    int num,i;
    int factorial = 1;
    printf("Enter number: ");
    scanf("%d",&num);
    while(num>=1){
        factorial = factorial * num;
        num--;
    }
    printf("Factorial - %d",factorial);
}
