#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front;
struct node *rear;

void enqueue(int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = x;
    temp->next=NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = temp;
    }

    else
    {
        rear->next = temp;
        rear=temp;
        
    }
}

void dequeue()
{
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty\n");
    }

    else
    {
        front = front->next;
    }
}

void print()
{
    struct node *temp1 = front;
    int i = 0;
    while (temp1 != NULL)
    {
        printf("%d\t", temp1->data);
        if (i == 10)
        {
            getchar();
        }
        i++;
        temp1=temp1->next;
    }

    printf("\n\n");
}

int main()
{
    enqueue(-1);
    enqueue(0);
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    print();
    dequeue();
    dequeue(); 
    print();
}