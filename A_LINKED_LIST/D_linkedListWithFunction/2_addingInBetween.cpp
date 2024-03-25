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

void insertatposition(int position, int data)
{
    if (position < 1)
    {
        printf("Invalid position\n");
        return;
    }

    struct node *temp = head;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    // If position is 1, insert at the beginning
    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    // Traverse to the node before the specified position
    for (int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    // Check if position is valid
    if (temp == NULL)
    {
        printf("Invalid position\n");
        free(newNode); // Free the allocated memory for the new node
        return;
    }

    // Insert newNode between temp and temp->next
    newNode->next = temp->next;
    temp->next = newNode;
}

int main()
{
    insert(5);
    insert(10);
    insert(15);

    struct node *temp = head;
    printf("Original Linked List:\n");
    while (temp != NULL)
    {
        printf("%d | %p |\n", temp->data, temp->next);
        temp = temp->next;
    }

    insertatposition(2, 25);
    insertatposition(3, 35);
    insertatposition(1, 45);

    temp = head;
    printf("\nLinked List after insertions:\n");
    while (temp != NULL)
    {
        printf("%d | %p |\n", temp->data, temp->next);
        temp = temp->next;
    }

    return 0;
}
