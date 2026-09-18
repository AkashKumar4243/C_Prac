#include<stdio.h>

int add(int n);

int main () {
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    int sum = add(n);

    printf("Sum of the number : %d",sum);

    return 0;

}

int add (int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    int sum = n + add(n-1);

    return sum;
}