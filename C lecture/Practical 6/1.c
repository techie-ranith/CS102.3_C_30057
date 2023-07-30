#include <stdio.h>

int main(){
    int array[10];
    int i,avg,num,min=0,max=0;
    for(i=0;i<10;i++){
        printf("Enter element: ");
        scanf("%d",&num);
        array[i] = num;
    }
    for(i=0;i<10;i++){
        printf("%d ",array[i]);
    }
    for(i=0;i<10;i++){
        min = array[0];
        if (array[i]<min){
            min = array[i];
        }
        if(array[i]>=max){
            max = array[i];
        }
    }
    avg = (array[5] + array[6])/2;

    printf("Min Value: %d \n",min);
    printf("Max Value: %d \n",max);
    printf("Avg Value: %d \n",avg);
    printf("Reverse array: \n");
    for(i=9;i>=0;i--){
        printf("%d ",array[i]);
    }
}