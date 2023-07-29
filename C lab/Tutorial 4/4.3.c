#include <stdio.h>

int main(){
    int curremtNumber = 0;
    printf("Enter a number: ");
    scanf("%d",&curremtNumber);
    if(curremtNumber%2 == 0){
        printf("%d",(curremtNumber*curremtNumber*curremtNumber)+1);
    }else{
        printf("%d",(curremtNumber/2));
    }
}
