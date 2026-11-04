#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

bool isFull(){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL){
        return true;
    }else {
        free(ptr);
        return false;
    }
}

bool isEmpty(struct node *top){
    if (top == NULL){
        return 1; 
    }else{
        return 0;
    }
}

struct node *push(struct node *top,int data) {
    if(isFull()){
        printf("Stack Overflow");
        return top;
    }

    struct node *new = (struct node *)malloc(sizeof(struct node));

    if(top == NULL){
        new->data = data;
        new->next = NULL;
        top = new;
        return top;
    }

    new->data = data;
    new->next = top;
    top = new;

    return top;

}

struct node *pop(struct node *top){
    if(isEmpty(top)){
        printf("Stack Underflow... \n");
        return top ;
    }

    printf("Deleted Element : %d\n",top->data);
    struct node *temp = top;
    top = top->next;
    free(temp);

    return top;
}

void stack_top(struct node *top){
    printf("stack top element : %d\n",top->data);
}


int main () {
    struct node *top = NULL;
    struct node *first;
    int data;

    // isEmpty(top);

    for(int i = 0 ; i < 3 ; i++){
        printf("Enter the element : ");
        scanf("%d",&data);
        top = push(top,data);
    }

    // printf("Enter the element : ");
    // scanf("%d",&data);
    // top = push(top,data);

    top = pop(top);

    stack_top(top);

    return 0;
}