#include <stdio.h>

int main(){
    int a;
    float b;
    double c;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a Floating number: ");
    scanf("%f",&b);
    printf("Enter a Double: ");
    scanf("%lf",&c);

    printf("%d\n",a);
    printf("%f\n",b);
    printf("%lf\n",c);
}
