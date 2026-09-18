#include<stdio.h>

int main () {
    int i = 10;
    int *p ;
    int **pp;

    p = &i;         // here int *p = &i : p stores the address and *p the value  
    pp = &p;        // *p = i means store the value of i address stored by p
    
    printf("%d %d %d",i,*(p),**pp);

    return 0;
}

// important 
// int *p = &a ; is correct but 
// int *p;
// *p = &a; is incorrect 

// p=a; incorrect  p is address and a is integer wrong
// p=&a; correct
// *p=a; correct
// *p=&a incorrect  *p means integer and &a is address wrong