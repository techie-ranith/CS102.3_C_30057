#include <stdio.h>

int main(){
    int array1[3][3],array2[3][3],array_tot[3][3];
    int i,j;
        for (i=0;i<3; i++){
            for (j=0;j<3;j++){
                printf("Enter array1 element [%d][%d]: ",i,j);
                scanf("%d",&array1[i][j]);
            }
        }
        printf("\n");
        for (i=0;i<3; i++){
            for (j=0;j<3;j++){
                printf("Enter array2 element [%d][%d]: ",i,j);
                scanf("%d",&array2[i][j]);
            }
        }
        printf("\n");
        for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                array_tot[i][j] = array1[i][j] + array2[i][j];
            }
        }
        printf("Sum of two arrays: \n");
        for(i=0;i<3;i++){
            for (j=0;j<3;j++){
                printf("%d ",array_tot[i][j]);
            }
            printf("\n");
        }
}