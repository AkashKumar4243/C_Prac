#include<stdio.h>

int main() {
    int arr[5];
    int sum = 0;

    for (int i = 1 ; i <= 5 ; i++){
        printf("Enter the mark of student %d : \n",i);
        scanf("%d",&arr[i-1]);
        sum += arr[i-1];
    }

    for(int i = 0 ; i < 5 ; i++){
        printf("Marks of student %d : %d \n",i+1,arr[i]);
    }

    printf("Average : %f",sum/5.0);

    return 0;
}