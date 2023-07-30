#include <stdio.h>

int main(){
    int num1,num2,num3,max;
    printf("Enter Number: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2)
        if(num1>num3)
            printf("Max is: %d",num1);
        else
            printf("max is: %d",num3);
    else
        if(num2>num3)
            printf("Max is: %d",num2);
        else
            printf("Max is: %d",num3);
}
