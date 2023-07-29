#include <stdio.h>

int main(){
    int i,first=0,n=0,second=1,next=0;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        next = first + second;
        first = second;
        second = next;
        printf("%d\n",next);
    }
}
