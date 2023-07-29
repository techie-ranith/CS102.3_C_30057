#include <stdio.h>

int main(){
    int num=0,even=0,odd=0;
    do{
        printf("Enter number: ");
        scanf("%d",&num);
        if(num == -99){
            break;
        }
        if(num%2 == 0){
            even++;
        }else{
            odd++;
        }
    }while(num !=-99);
    printf("Number of Even number: %d\n",even);
    printf("Number of Odd numbers: %d",odd);
}
