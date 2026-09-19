#include<stdio.h>

int main () {
    int n,x,temp;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the multiplication factor : ");
    scanf("%d",&x);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ",i);
        scanf("%d",&temp);       // scanf has new line inside itself
        arr[i] = temp*x;
    }

    for (int i = 0; i < n; i++)
    {
            printf("%d ",arr[i]);
    }

    return 0;
       
}