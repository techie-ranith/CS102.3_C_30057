#include <stdio.h>

int main() {
    int emp_no = 0, count = 0;
    float basic_sal = 0;
    
    while (1) {
        printf("Employee No: ");
        scanf("%d", &emp_no);
        if (emp_no == -999) {
            break;
        }
        printf("Enter Basic Salary: ");
        scanf("%f", &basic_sal);
        if (basic_sal >= 5000) {
            count++;
        }
    }
    printf("Number of Employees >= 5000: %d", count);
    return 0;
}

