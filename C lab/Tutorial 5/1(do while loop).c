int main(){
    int num=0,even=0,odd=0;
    int i=1;
    do{
        printf("Enter number: ");
        scanf("%d",&num);
        if(num%2 == 0){
            even++;
        }else{
            odd++;
        }   
        i++;
    }while(i<=4);
    printf("Number of Even number: %d\n",even);
    printf("Number of Odd numbers: %d",odd);
}
