#include <stdio.h>

int main(){
    int num,i,j,even;
    int array[10] = {0};
    for(i=0;i<=10;i++){
        printf("Enter Number: ");
        scanf("%d",&num);
        if(num%2==0){
            even++;
        }
        array[i] = num;
    }
    printf("%d",even);
    
}
