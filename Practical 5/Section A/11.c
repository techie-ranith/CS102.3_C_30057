#include <stdio.h>

int main(){
    int num,loop;
    int prime=1;
    printf("Enter Number: ");
    scanf("%d",&num);
    for(loop=2;loop<num;loop++){
        if((num%loop)==0){
            prime = 0;
        }
    }
    if(prime==0){
        printf("%d is NOT a prime number...",num);
    }else{
        printf("%d is a prime number...",num);
    }
}
