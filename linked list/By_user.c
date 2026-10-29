#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void traverse(struct Node *p){
    
    do{
        printf("%d\n",p->data);
        p = p->next;
    } while (p != NULL);
    

}

int main () {
    int n;

    struct Node *Head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;

    printf("Enter the number of element you want to store in linked list : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter the data in %d location : ",i);
        scanf("%d",&newNode->data);

        newNode->next = NULL;

        if(Head == NULL){
            Head = newNode;
            temp = newNode;
        }else {
            temp->next = newNode;
            temp = newNode;
        }

        // printf("%d %u\n",newNode->data,newNode->next);
        // printf("%d %u\n",temp->data,temp->next);
    }

    traverse (Head);
    
    return 0;
}

