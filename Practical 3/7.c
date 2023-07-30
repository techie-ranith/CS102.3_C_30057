#include <stdio.h>
int main(){
    float basic_sal, years, net_total;
    char c;
    printf("Enter the basic salary: ");
    scanf("%f",&basic_sal);
    printf("Enter number of years worked: ");
    scanf("%f",&years);
    printf("Enter the city you live: ");
    scanf(" %c",&c);
    if(c == 'c'){
        net_total = net_total + 2500;
    }
    if (years>=5)
    {
        net_total = (basic_sal*10)/100;
    }

    if(basic_sal>=25000){
        net_total = net_total +  (basic_sal + (basic_sal*10)/100);
    }
    else if (basic_sal<=50000)
    {
    net_total = net_total +  (basic_sal + (basic_sal*12)/100);
    }
    else{
    net_total = net_total +  (basic_sal + (basic_sal*15)/100);

    }
    printf("Total_Salary: %f",net_total);
}
