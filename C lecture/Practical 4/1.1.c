#include <stdio.h>
#include <string.h>

int main(){
    int num1;
    printf("Enter a Number: ");
    scanf("%d", &num1);
    if (num1 % 2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}
