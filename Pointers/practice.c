#include<stdio.h>

void address(int *p,int a);

int main () {
    int i;
    i = 10;

    printf("Address of the variable : %u and the value using value at address operator : %d\n",&i,*(&i));
    address(&i,i);

    return 0;
}

void address (int *p,int a){
    printf("address of *p : %u and the address of a : %u",&(*p),&a);
}