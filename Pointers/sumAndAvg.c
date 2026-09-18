#include<stdio.h>

void sumAvg (int *a1,int *a2,int *sum,float *avg) {
    *sum = *a1 + *a2;
    *avg = (*sum)/2.0;      // if write only 2 than integer evaluated first then type cast to float 11/2=6 
}

int main () {
    int n1,n2;
    int sum = 0;
    float avg = 0;

    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);

    sumAvg(&n1,&n2,&sum,&avg);

    printf("Sum = %d Avg = %f",sum,avg);

    return 0;
}