#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *one = (struct node *)malloc(sizeof(struct node));
    struct node *two = (struct node *)malloc(sizeof(struct node));
    struct node *three = (struct node *)malloc(sizeof(struct node));

    struct node *head = one;

    // Assigning data's value
    one->data = 34;
    two->data = 68;
    three->data = 52;

    // Assigning pointer reference
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Temporary node for loop
    struct node *temp = head;

    // Looping through the node
    while (temp != NULL)
    {
        printf("%d \t |%d| \n", temp->data, temp->next);
        temp = temp->next;
    }

    // Creating new node
    struct node *zero = (struct node *)malloc(sizeof(struct node));

    // Assigning data's value to the last node
    zero->data = 45;

    // Adding the address of the first node zero to the new node
    zero->next=one;

    //Reinitializing the head to zero
    head=zero;
    
    getchar();

    printf("After adding new node to the last\n");
    // Revisiting the list to check if new node had been added or not
    temp=head;
    while (temp != NULL)
    {
        printf("%d \t |%d| \n", temp->data, temp->next);
        temp = temp->next;
    }
}