#include<stdbool.h>
#include<stdio.h>

bool isLowercase (char c) {
    bool check = false;

    if ((c >= 97) && (c <= 122)){
        check = true ;
    }

    return check;
}

int main () {
    char c;
    bool check ;

    printf("Enter the character : ");
    scanf("%c",&c);

    check = isLowercase(c);

    check ? printf("LowerCase") : printf("Not a Lowercase");

    return 0;

}