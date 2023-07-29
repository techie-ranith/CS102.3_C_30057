#include <stdio.h>

int main(){
    char name[20];
    float salary, increment, new_salary;
    printf("Enter Name: ");
    scanf("%s",&name);
    printf("Enter basic salary: ");
    scanf("%f",&salary);
    if(salary<5000){
        increment = (salary/100)*5;
    }
    else if(salary<10000){
        increment = (salary/100)*10;
    }
    else{
        increment = (salary/100)*15;
    }
    new_salary = salary + increment;
    printf("%s:\n",name);
    printf("New Salary is: %.2f", new_salary);
}
