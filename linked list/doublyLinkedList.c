#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

void traverse (struct node *ptr){
    // printf("%d",ptr);
    while (ptr->next != NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }

    printf("%d",ptr->data);
    
}

struct node *delete (struct node *first, int pos){

    struct node *head = first->next;
    struct node *tail = first;

    if(pos==0){
        head->prev = NULL;
        // free(first);
        return head;
    }

    int i = 0 ;
    while (i < pos)
    {
        if(tail == head){
            printf("Invalid Index\n");
            return first;
        }
        tail = head;
        // printf("%d\n",head->next);
        if(head->next != 0){
            head = head->next;
        }
        i++;
    }

    if(head == tail){
        tail = tail->prev;
        tail->next = NULL;
    } else {
        head->prev = tail->prev;
    tail = tail->prev;
    tail->next = head;
    }

    

    return first;
}

struct node * insert (struct node *new,struct node *first,int n){
    struct node *ptr = first;
    if (n==0){
        new->prev = NULL;
        new->next = first;
        first->prev = new;
        return new;
    }else{
        int i = 0;
        while (i < n - 1)
        {
            ptr = ptr->next;
            // printf("%d %d\n",i,ptr->data);
            i++;
        }
        if (ptr->next == NULL)
        {
            new->next = NULL;
            new->prev = ptr;
            ptr->next = new;
        } else{
            new->prev = ptr->prev;
            ptr->prev->next = new;
            new->next = ptr;
            ptr->prev = new;
        }
        
        
    }
    return first;
}


int main () {
    struct node *first,*second,*third;
    struct node *newNode;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    newNode = (struct node *)malloc(sizeof(struct node));

    first->prev = NULL;
    first->data = 23;
    first->next = second;

    second->prev = first;
    second->data = 34;
    second->next = third;

    third->prev = second;
    third->data = 77;
    third->next = NULL;

    // printf("%d",23);
    // printf("%d",(first->data));

    newNode->data = 56;
    first  = insert(newNode,first,2); 
    first = delete(first,3);
    traverse(first); //indexing starts from 0 

    return 0;
}