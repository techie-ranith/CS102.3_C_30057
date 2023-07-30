#include <stdio.h>

int main(){
    int num,i,j;
    int array[10] = {0};
    for(i=0;i<=10;i++){
        printf("Enter Number: ");
        scanf("%d",&num);
        array[i] = num;
    }
    for(j=0;j<=10;j++){
        printf("%d",array[j]);
    }
}
