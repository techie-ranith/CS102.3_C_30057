#include <stdio.h>

int main() {
    int i;
    float total,mark;

    for (i = 1; i<=10; i++){
        printf("Enter %d mark: ",i);
        scanf("%f",&mark);
        total+=mark;
    }
    if(total/10>=50){
        printf("Pass");
    }else{
        printf("Fail");
    }
}
