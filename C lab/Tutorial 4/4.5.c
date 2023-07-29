#include <stdio.h>

int main(){
    double cost;
    double distance;
    if(distance >= 1000){
        cost = distance * 5;
    }
    else if(distance >= 500){
        cost = distance * 8;
    }
    else if(distance >=100){
        cost = distance * 10;
    }else{
        cost = distance * 12;
    }
}
