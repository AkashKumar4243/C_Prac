#include <stdio.h>

int linear (int *arr,int n,int num){
    
    int i = 0;
    while (i<n){
        if (num == arr[i]){
            printf("Element is present at index %d",i);
            break;
        }
        i++;
        if(i == n){
            printf ("Element is not present in the array");
        }
    }
    return 0;
}

int main () {
    int a[5] = {2,4,6,8,7};
    linear (a,5,4);
    return 0;
}