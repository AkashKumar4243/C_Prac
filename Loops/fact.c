#include <stdio.h>

int main () {
    int n;
    int fact = 1;

    printf("enter the number : ");
    scanf("%d",&n);


    for(int i = n ; i>1 ; i--){
        fact = fact * i;
        printf("%d \n",fact);
    }

    printf("factorial of the number : %d",fact);
    return 0;
}