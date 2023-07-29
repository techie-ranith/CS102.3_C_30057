#include <stdio.h>
#include <string.h>

int main(){
    int selection;
    printf("1.Calculate Circumfarance of a Circle\n");
    printf("2.Calculate Area of a Circle\n");
    printf("3.Calculate Volume of a Sphere\n");
    printf("Select from the Number");
    scanf("%d",&selection);
    float radius;
    printf("Enter Radius of the Circule: ");
    scanf("%f",&radius);
    float pie = 3.1234 ;
    switch (selection)
    {case 1:
        printf("Circumfarance of the Circle: %.2f",2*pie*radius);
        break;
    case 2:
        printf("Area of the Circle: %.2f",pie*radius*radius);
        break;
    case 3:
        printf("Volume of a Sphere: %.2f",(4.0/3.0)*pie*radius*radius*radius);
        break;
    default:
        printf("Invalid Selection");
    }
}
