#include <stdio.h>

int main(){
    int i=0,tot=0,j=0,num1=0,digit=0,amst=0,count=0;
    printf("Enter Amstrong Number: ");
    scanf("%d",&num1);
    for(i=0;i<num1;i++){
        digit=num1%10;
        num1/=10;
        count++;
    }
    for(j=0;j<num1;j++){
        digit=num1%10;
        tot = digit^count;
    }
    amst+=tot;
    if(amst == num1){
        printf("This is a Amstrong Number: ");
    }else{
        printf("This is not a Amstrong Number: ");
    }
}
