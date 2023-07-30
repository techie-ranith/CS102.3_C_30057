#include <stdio.h>

int main(){
    int number,sum ;
    printf("Enter Number: ");
    scanf("%d",&number);
    do{
        int digit = number % 10;
        printf("%d", digit);
        number /= 10;
    }while(number != 0);
}
