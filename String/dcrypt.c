#include<stdio.h>

void dcrypt (char *st,char *st2){
    while (*st != '\0')
    {
        if (*st == 'a')
        {
            *st2 = 'z';
            st2++;
            st++;
        } else if(*st == 'A'){
            *st2 = 'Z';
            st2++;
            st++;
        } else{
            *st2 = *st - 1;     // why *st -= 1; not works because we just decresing not assigning
            st2++;
            st++;
        }

        *st2 = '\0';
        
    }
    
}

int main () {
    char st[30];
    char Dcrypt[30];

    printf("Enter the  encrpyt string : ");
    gets(st);

    dcrypt(st,Dcrypt);
    puts(Dcrypt);

    return 0;
}