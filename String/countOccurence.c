#include<stdio.h>

int countOccurence(char *st,char x){
    int count = 0;
    // printf("%c",x);
    while (*st != '\0')
    {
        if (*st == x)
        {
            count++;
        }
        st++;
        
    }
    // puts(st);
    return count;
}

int main () {
    char st[50];
    char a;
    int count;
    printf("Enter the name : ");
    gets(st);
    printf("Enter the character wants to count : ");
    scanf("%c",&a);
    // printf("check");
    count = countOccurence(st,a);
    printf("%c occur %d times : ",a,count);

    return 0;
}