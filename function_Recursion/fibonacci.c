#include<stdio.h>

int fib(int n);

int main () {
    int n,N;

    printf("Enter the position : ");
    scanf("%d",&n);

    for (int i = 1 ; i<= n; i++){
         N = fib(i);
    printf("%d\n",N);
    }

    // nth position element in series
    //  N = fib(n);
    // printf("%d\n",N);
    return 0;
}

int fib(int n){
    int N;
    if(n == 1 || n==2){
        return 1;
    }
    N = fib(n-1)+fib(n-2);
    return N;
}