#include <stdio.h>

int main(){
    int distance,time,speed;
    printf("Enter Distance Travelled : ");
    scanf("%d",&distance);
    printf("Enter time taken: ");
    scanf("%d",&time);
    speed = distance/time;
    printf("Average Speed%d",speed);
}
