#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void traverse(struct Node *p){
    
     while (p != NULL){
        printf("%d\n",p->data);
        p = p->next;
    }
    
}

struct Node *insert(struct Node *Head,struct Node* new,int n){
    struct Node *temp;
    temp = Head;
    if(n==0){
            new->next = Head;
            return new;
    }
    int i = 0;
    while (temp != NULL && (i < n-1)){
        temp = temp->next;
        i++;
    }

    
    
    new->next = temp->next;
    temp->next= new;

    return Head;

}

struct Node *delete(struct Node *head,int n){
    struct Node *temp,*temp1;
    temp = head;
    if (n==0){
        head = head->next;
        free(temp);
        return head;
    }

    int i = 0;
    while (temp != NULL && (i < n-1)){
        temp = temp->next;
        temp1 = temp->next;
        i++;
    }

    temp->next = temp1->next;
    free(temp1);

    return head;
    
}

int main () {
    struct Node *Head,*Second,*third,*insert_node;

    Head = (struct Node*)malloc(sizeof(struct Node));
    Second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    insert_node = (struct Node*)malloc(sizeof(struct Node));

    Head->data = 3;
    Head->next = Second;

    Second->data = 5;
    Second->next = third;

    third->data = 7;
    third->next = NULL;

    insert_node->data = 11;

    Head = insert(Head,insert_node,3);
    Head = delete(Head,3);

    traverse(Head);


    return 0;
}
