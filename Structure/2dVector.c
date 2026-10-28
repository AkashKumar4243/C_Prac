#include<stdio.h>

struct two_d_vector
{
    int row[4];
    int col[4];
};


int main () {
    struct two_d_vector mat;

    printf("Enter the row element : \n");  // I want to get all element seprated by space
    for (int  i = 0; i < 5; i++)
    {
        printf("%d : ",(i+1));
        scanf("%d",&mat.row[i]);
    }
    printf("Enter the col element : \n");  // I want to get all element seprated by space
    for (int  i = 0; i < 5; i++)
    {
        printf("%d : ",(i+1));
        scanf("%d",&mat.col[i]);
    }
    
}

