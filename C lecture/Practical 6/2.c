#include <stdio.h>

int main(){
    int num,input,i,tot;
    printf("Enter a number of elements in array: ");
    scanf("%d", &num);
    int array[num];
    for(i=1; i<=num;i++){
        printf("Enter array element %d : ",i);
        scanf("%d",input);
        tot += input;
        array[i] = input;
    }
    printf("Total: %d",tot);
}