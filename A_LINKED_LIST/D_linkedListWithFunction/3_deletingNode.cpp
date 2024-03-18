#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;
struct node *tail;

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

void deleteFirstNode()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
}

void deleteLastNode()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node *temp = head;
    struct node *prev = NULL;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    if (prev != NULL)
    {
        prev->next = NULL;
        tail = prev;
    }
    else // Only one node in the list
    {
        head = NULL;
        tail = NULL;
    }
    free(temp);
}

void print()
{
    struct node *temp1 = head;
    while (temp1 != NULL)
    {
        printf("%d|", temp1->data);
        printf("%p|\n", temp1->next);

        temp1 = temp1->next;
    }
    printf("\n");
}

int main()
{
    insert(4);
    print();
    insert(6);
    insert(9);
    print();

    deleteFirstNode();
    deleteLastNode();
    deleteFirstNode();
    deleteLastNode();
    deleteLastNode();
    print();

    return 0;
}
