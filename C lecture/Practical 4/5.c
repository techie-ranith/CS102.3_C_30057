#include <stdio.h>
#include <string.h>

int main(){
    int num;
    printf("Enter month number: ");
    scanf("%d",&num);
    switch(num%2){
        case 0:
        printf("Even months have 30 days");
        break;
        case 1:
        printf("Odd months have 31 days");
        break;
    }
}
