#include<stdio.h>

void strcpy(char *target,char *source){
    while (*source != '\0')
    {
        *target = *source;
        target++;
        source++;
    }

    *target = '\0';
    
}

int main () {
    char source[20];
    char target[20];
    
    printf("enter the string : ");
    gets(source);

    strcpy(&target,&source);
    printf("source is : ");
    puts(source);
    printf("target is : ");
    puts(target);

    return 0;
}