#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void traverse(struct node *p){
    struct node *n;
    n = p;
     while (p->next != n){
        printf("%d\n",p->data);
        p = p->next;
    }
    printf("%d",p->data);
    
}


int main () {
    int n;
    struct node *head ,*newNode,*temp;

    printf("Enter the number of element you want to enter : ");
    scanf("%d",&n);

    int  i = 0;
    while (i<n){
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("enter the %d element : ",i);
        scanf("%d",&newNode->data);
        newNode->next = NULL;

        if(i==0){
            head = newNode;
            temp = newNode;
        }
        else if (i == n-1){
            temp->next = newNode;
            newNode->next = head;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
        i++;
    }

    traverse(head);

    return 0;
}