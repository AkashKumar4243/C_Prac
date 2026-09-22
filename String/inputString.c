#include<stdio.h>

int main () {
    char fname[20];
    char lname[20];

    int i = 0;      //initialize outside the while otherwise i will assign 0 again and again
    printf("Enter your first name : ");
    while (1)
    {   
        scanf("%c",&fname[i]);      //first take the input then check whether entered is pressed or not 
        if(fname[i] == '\n'){       // new line means enter is pressed 
            fname[i] = '\0';        // this is important to assign null at last of string
            break;
        }
        i++;
    }
    printf("Enter your last name : ");
    scanf("%s",lname);

    puts(fname);
    puts(lname);
    return 0;
    
}