#include<stdio.h>

int main (){
    int n;
    int sum;

    printf("Enter the number : ");
    scanf("%d",&n);

    sum = 0;

    // Using for loop
    // for (int i = 0 ; i <=n ; i++){
    //     printf("%d \n",i);
    //     sum += i;
    // }

    // using while loop
    // int i = 0;
    // while (i<=n){
    //     printf("%d \n",i);
    //     sum += i;
    //     i++;
    // }

    //using do while 
    int i = 0;
    do {
        printf("%d \n",i);
        sum += i;
        i++;
    }while (i<=n);
    
    printf("sum of n number = %d",sum);

    return 0;
}