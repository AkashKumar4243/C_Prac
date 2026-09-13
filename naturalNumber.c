#include<stdio.h>

int main (){
    int n;
    int sum;

    printf("Enter the number : ");
    scanf("%d",&n);

    sum = 0;
    for (int i = 0 ; i <=n ; i++){
        printf("%d \n",i);
        sum += i;
    }
    
    printf("sum of n number = %d",sum);

    return 0;
}