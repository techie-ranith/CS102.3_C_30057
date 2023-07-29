#include <stdio.h>

int main(){
    int max=0,i=0;
    float price=0,tot=0;
    for(;i<=9;i++){
        printf("Enter Price: ");
        scanf("%f",&price);
        tot+=price;
        if(price>=200){
            max++;
        }
    }
    printf("Average Price: %.2f\n",tot/10);
    printf("Number of items > 200: %d",max);
}
