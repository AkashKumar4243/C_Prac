#include<stdio.h>

float avg(int a[],int n);

int main() {
    int n;

    printf("Enter the number of students : ");
    scanf("%d",&n);
    int arr[n];

    float average = avg(arr,n);
    printf("Average of students : %.2f",average);

    return 0;
}

float avg(int a[],int n){
    float sum = 0.0;
    float avg;
    
    for(int i = 0 ; i < n ; i++){
        printf("Enter the %d student number : ",(i+1));
        scanf("%d",&a[i]);
        sum += a[i];
    }

    avg = sum/n;
    return avg;
}