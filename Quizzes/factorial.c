#include<stdio.h>

int fact (int n) {
    int factorial;
    if(n==1 || n ==0){              // base condition
        return 1;
    }
    factorial = n * fact(n-1);

    return factorial;
}

int main() {
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    printf("Factorial of number %d is %d",n,fact(n));

    return 0;

}