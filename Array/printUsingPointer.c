#include<stdio.h>

int main () {
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int *n;
    n = &arr[0];

    printf("%d ",*(arr+3));     // array name contains its base address arr+3 is the 4th element

    for(int i = 0 ; i < 10 ; i++){
        printf("%d ",*(n+i));
    }
    printf("\n");
    for(int i = 0 ; i < 10 ; i++){
        printf("%d ",*(n++));
    }

    return 0;
}