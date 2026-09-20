#include<stdio.h>

int main () {
    char ch[] = "Shivam";

    int i = 0;
    // while (ch[i] != '\0')
    // {
    //     printf("%c",ch[i]);
    //     i++;
    // }

    // OR

    while(1){
        if(ch[i] == '\0'){
            break;
        }
        printf("%c",ch[i]);
        i++;
    }
    return 0;
}