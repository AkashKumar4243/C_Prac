#include<stdio.h>

void reverseArray (int arr[],int n);

int main () {
    int arr[5] = {1,2,3,4,5};

    reverseArray(arr,5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
    
}

void reverseArray(int arr[],int n) {
    int mid = n/2;
    
    for (int i = 0 ; i < mid ; i++){
        int temp;
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}