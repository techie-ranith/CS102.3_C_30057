#include <stdio.h>

int main() {
    int emp_no = 0, count1 = 0, count2 = 0;
    float ot = 0, hrs = 0;
    
    while (1) {
        printf("Employee No: ");
        scanf("%d", &emp_no);
        if (emp_no == -999) {
            break;
        }
        count1++;
        printf("No of hrs worked: ");
        scanf("%f", &hrs);
        if (hrs <= 40) {
            ot = hrs * 150;
        } else {
            ot = hrs * 200;
        }
        printf("Empolyee No: %d\n", emp_no);
        printf("Overtime Payment: %.2f\n", ot);
        if (ot >= 4000){
            count2++;
        }
    }
    float percentage = (float) count2 / count1 * 100;
    printf("Percentage: %.2f%%", percentage);
    return 0;
}
