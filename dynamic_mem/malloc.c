#include<stdio.h>
#include<stdlib.h>

int main () {
    int n;
    int *ptr;
    printf("Enter the size of dynamic memory : ");
    scanf("%d",&n);

    ptr = (int*)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ",(i+1));
        scanf("%d",&ptr[i]);
    }

    free(ptr);

    for (int i = 0; i < n; i++)
    {
        printf(" %d \n",ptr[i]);
    }

    return 0;
    
}