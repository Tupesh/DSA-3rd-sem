#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void insert(int datum)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = datum;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int main()
{
    insert(5);
    insert(10);
    insert(15);

    struct node *temp = head;
    printf("Linked List:\n");
    while (temp != NULL)
    {
        printf("%d \t %p\n", temp->data, temp->next);
        temp = temp->next;
    }


    return 0;
}