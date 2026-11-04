#include <stdio.h>

void selection_sort(int *a,int n){
    int min = 0;
    int i = 0;

    while (i<n)
    {
        min = a[i];

        for(int j = i ; j < n; j++){
            if(a[j] < a[i]){
                a[i] = a[j]+a[i];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
        i++;
    }
    
}

int main() {
    int arr[5] = {8,5,7,3,2};
    selection_sort(arr,5);
    
    for (int i = 0 ; i < 5 ; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}