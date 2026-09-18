#include <stdio.h>
#include <stdbool.h>

bool checkLeapYear(int year) {
    bool check = false;

    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))){
        check = true ;
    }

    return check;
}

int main () {
    int year ;
    bool check;

    printf("Enter the year : ");
    scanf("%d",&year);

    check = checkLeapYear(year);

    // if(check)
    // printf("LeapYear");
    // else 
    // printf("Not a Leap Year");

    check ? printf("Leap Year") : printf("Not a Leap Year");
    
    return 0;
}