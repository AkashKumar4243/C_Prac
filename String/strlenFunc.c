#include<stdio.h>

int strlen(char *p){
    int length = 0 ;
    while (*(p) != '\0')
    {
        length++;
        p++;
    }

    return (length);
    
}

int main () {
    char st[] = "My name is xxxx";
    int len = strlen(st);

    printf("Length of the string is : %d",len);

    return 0;
}