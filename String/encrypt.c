#include<stdio.h>

void encrypt (char *st,char *st2){
    while (*st != '\0')
    {
        if(*st == 'z'){
            *st2 = 'a';
            st++;
            st2++;
        } else if (*st == 'Z')
        {
            *st2 = 'A';
            st++;
            st2++;
        }else
        {
            *st2 = *st + 1;
            st++;
            st2++;
        }

        *st2 = '\0';
    }
    
}

int main () {
    char string[30];
    char encrypted_string[30];

    printf("enter the string : ");
    gets(string);

    encrypt(string,encrypted_string);
    printf("encrypted : ");
    puts(encrypted_string);

}