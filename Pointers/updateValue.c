#include<stdio.h>

void changeValue(int *p);

int main () {
    int i = 10;

    changeValue(&i);
    printf("%d",i);

    return 0;
}

//Here p = &i
//     *p = i

void changeValue(int *p){
    *p *= 10;
    
}

