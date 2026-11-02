#include<stdio.h>
#include<stdlib.h>

int main () {
    int n;
    int *ptr;
    printf("Enter the size of dynamic memory : ");
    scanf("%d",&n);

    ptr = (int *)calloc(5,sizeof(int));

    // for (int i = 0; i < n; i++)
    // {
    //     ptr[i] = (int *)malloc(sizeof(int));
    //     printf("Enter the %d element : ",(i+1));
    //     scanf("%d",&ptr[i]);
    // }

    for (int i = 0; i < n; i++)
    {
        printf(" %d \n",ptr[i]);
    }

    return 0;
    
}