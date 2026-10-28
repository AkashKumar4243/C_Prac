// for binary search array must be sorted
void binary_search (int *a,int n,int num);

#include<stdio.h>

int main() {
    int arr[5] = {2,4,6,7,8};

    binary_search(arr,5,4);

    return 0;
}

void binary_search (int *a,int n, int num){
    int start,end,mid;
    start = 0;
    end = n-1;
    mid = start + (end-start)/2;

    while (start <= end){
        if(a[mid] == num){
            printf("element is present at index %d",mid);
            break;
        }
        else if (a[mid] < num)
        {
            start = mid + 1;
        }
        else if (a[mid] > num)
        {
            end = mid - 1;
        }
        
        mid = start + (end-start)/2;
    }

    if(start > end){
        printf("element not found");
    }
}