#include<stdio.h>

int presentOrNot (char *st,char x){
    int check = 0;
    // printf("%d",x);

    while (*st != '\0')
    {
        if (*st == x)       // don't write *st == 'x' because x itself is a character
        {
            check = 1;
            return check;
        }
        st++;
    }
    return check;
}

int main () {
    char st[50];
    char x;
    printf("Enter the String : ");
    gets(st);
    printf("Enter the character : ");
    x = getc(stdin);
    // putc(x,stdout);

    presentOrNot(st,x) ? printf("%c is present ",x) : printf("%c is not present",x);

    return 0;
}