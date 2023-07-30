#include <stdio.h>

int main(){
    int num,i,sum;
    for(i=1;i<=1000;i++){
        printf("Enter Number: ");
        scanf("%d",&num);
        if(num==-1){
            break;
        }
        sum+=num;
    }
    printf("Total: %d",sum);
}
