#include<stdio.h>

int main () {
    char st[] = "Monkey D Luffy";
    int m,n;
    char slice[30];
    printf("enter the starting point of slicing : ");
    scanf("%d",&m);
    printf("Enter the last the point of slicing (last index will be exculded) : ");
    scanf("%d",&n);
    if (m>n)
    {
        printf("invalid indexes ");
        return 0;
    }

    int j = 0;
    for (int i = m; i < n; i++) {
        slice[j] = st[i];
        j++;
    }

    slice[j] = '\0';      // this is important otherwise garbage value will starts printing

    puts(slice);
    
    
}