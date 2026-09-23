#include<stdio.h>

struct employee
{
    int code;
    int salary;
    char name[50];
};

int main () {
    struct employee e[2];

    for (int i = 0 ; i <= 2 ; i++){
        printf("Enter employee %d Code : ",(i+1));
        scanf("%d",&e[i].code);
        printf("Enter employee %d name : ",(i+1));
        scanf("%s",&e[i].name);
        // gets(e[i].name);
        printf("Enter employee %d salary : ",(i+1));
        scanf("%d",&e[i].salary);
    }

    printf("code        name        salary\n");

    for (int i = 0; i <= 2; i++)
    {
        printf("%d      %s      %d\n",e[i].code,e[i].name,e[i].salary);
    }

    return 0;
    
}
