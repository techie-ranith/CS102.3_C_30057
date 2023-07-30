#include <stdio.h>

int main(){
    char name[10];
    int b_year,age;
    printf("Enter First Name: ");
    scanf("%s",&name);
    printf("Enter Birth Year: ");
    scanf("%i",&b_year);
    printf("\n %s",name);
    age = 2023-b_year;
    printf("%i",age);

}
