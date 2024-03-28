#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *tos = NULL;
struct node *temp = NULL; 

void push(int datum)
{
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = datum;
    temp->next = tos;
    tos = temp;
}

bool isEmpty()
{
    return (tos == NULL); 
}

void pop()
{
    if(isEmpty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        temp = tos;
        tos = tos->next;
    }
}

void print()
{
    struct node *temp2 = tos;
    while(temp2 != NULL) 
    {
        printf("%d ", temp2->data);
        temp2 = temp2->next;
    }
    printf("\n");
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);   
    print();
    printf("After deleting:\n");
    pop();
    pop();
    pop();
    print();

    return 0;
}