#include <stdio.h>

int main(){
    int opCode;
    double x,y;
    printf("Enter opCode value: ");
    scanf("%d",&opCode);
    if (opCode == 1){
    printf("Enter value for x: ");
    scanf("%lf",&x);
    printf("Enter value for y: ");
    scanf("%lf",&y);
    printf("Sum: %.2lf",x+y);
    }
}
