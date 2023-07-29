#include <stdio.h>
#include <string.h>

int main(){
    int num2;
    printf("\nEnter a Number: ");
    scanf("%d", &num2);
    switch (num2 % 2){
        case 0:
            printf("Even Number");
            break;
        case 1:
            printf("Odd Number");
            break;
    }
}
