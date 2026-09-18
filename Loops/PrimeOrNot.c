#include<stdio.h>
#include<stdbool.h>

int main () {
    int n;
    bool isPrime = 1;

    printf("enter the number : ");
    scanf("%d",&n);

    // for (int i=2 ; i<n ; i++){
    //     if (n%i == 0){
    //         isPrime = false;
    //         break;
    //     }
    //     // printf("%d\n",i);
    // }

    //Best way
    for (int i=2 ; (i*i) <n ; i++){
        if (n%i == 0){
            isPrime = false;
            break;
        }
        printf("%d\n",i);
    }

    isPrime ? printf("entered number is prime number") : printf("entered number is not a prime number");

    return 0;
}