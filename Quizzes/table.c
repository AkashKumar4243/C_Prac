#include<stdio.h>

int main () {
    int n;
    int sum;

    printf("Enter the number : ");
    scanf("%d",&n);

    sum = 0;

    for (int i = 1 ; i <= 10 ; i++){
        printf("%d * %d = %d \n",n,i,(n*i));
        sum += n*i;
    }

    printf("Sum from %d * 1 till %d * 10 = %d",n,n,sum);

    return 0;

}