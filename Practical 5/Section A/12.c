#include <stdio.h>

int main(){
    int num,i,j;
    int mod=1;
    printf("Enter Number: ");
    scanf("%d",&num);
    printf("Factors of %d\n",num);
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++)
            if((i%j)==0){
                printf("%d x %d\n",i,j);
            }
    }
}
