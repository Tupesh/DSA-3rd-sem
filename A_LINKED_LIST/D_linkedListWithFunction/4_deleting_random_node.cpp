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

void deleteNode(int position)
{
    struct node *temp = head;
    for (int i = 1;  i < position; i++)
    {
        temp = temp->next;
    }
    

    struct node *nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);
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
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    print();

    printf("\n\nAfter deleting node at position 4\n\n");
    deleteNode(3); // Deleting the node at position 3, counting from 0

    print();

    return 0;
}
