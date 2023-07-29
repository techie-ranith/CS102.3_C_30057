#include <stdio.h>

int main(){
    int i,num=0,positive=0,negative=0,zero=0;
    for(i=1;i<=10;i++){
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num>0){
            positive++;
        }else if(num<0){
            negative++;
        }else{
            zero++;
        }
    }
    printf("Positive Numbers: %d\n Negative Numbers: %d\n Zero's: %d",positive,negative,zero);
}
