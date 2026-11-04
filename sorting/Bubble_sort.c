#include <stdio.h>

void swap (int* m, int* n) {
    // printf("%d\n",*m);
    *m = *m + *n;
    *n = *m - *n;
    *m = *m - *n;
}

void Bubble_sort(int *a, int n){

    int i = 0 ;
    while (i<n-1){
        for(int j = 0 ; j < n-1-i ; j++){
            if(a[j] > a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
        i++;
    }
}

int main () {
    int arr[5] = {8,5,7,3,2};
    Bubble_sort(arr,5);
    
    for (int i = 0 ; i < 5 ; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}