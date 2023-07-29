#include <stdio.h>

int main(){
    int year,leapYear;
    printf("Enter Year: ");
    scanf("%d",&year);
    if(year%4 == 0 && 100 != 0 || year % 400 ){
    leapYear = 1;
    }
}
