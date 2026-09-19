#include<stdio.h>

int posValues (int *p,int n){
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if(*(p+i) >= 0){
            count++;
        }
    }

    return count;
}

int main () {
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d element : ",i);
        scanf("%d",&arr[i]);
    }

    int count = posValues(arr,5);

    printf("positive values : %d",count);

    return 0;
}