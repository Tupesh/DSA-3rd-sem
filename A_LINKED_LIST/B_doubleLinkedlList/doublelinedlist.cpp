#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

int main()
{
    struct node *one = (struct node *)malloc(sizeof(struct node));
    struct node *two = (struct node *)malloc(sizeof(struct node));
    struct node *three = (struct node *)malloc(sizeof(struct node));

    // Defining head and tail of a node
    struct node *head = one;
    struct node *tail = three;

    // Assigning data's value
    one->data = 364;
    two->data = 968;
    three->data = 752;

    // Assigning pointer reference to next
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Assigning pointer reference to previous
    three->prev = two;
    two->prev = one;
    one->prev = NULL;

    // Temporary node for loop through head node
    struct node *tempNext = head;

    // Temporary node for loop through tail node
    struct node *tempPrev = tail;

    // Looping through the node from 1st to 2nd and so on
    printf("Looping from head\n");
    while (tempNext != NULL)
    {
        printf("%d \t| %p |\t| %p |\n", tempNext->data, tempNext->next,tempNext->prev);
        tempNext = tempNext->next;
    }

    // Looping through the node from 3rd to 2nd and so on
    printf("\nLooping from tail\n");
    while (tempPrev != NULL)
    {
        printf("%d \t| %p |\t| %p |\n", tempPrev->data,tempPrev->next, tempPrev->prev);
        tempPrev = tempPrev->prev;
    }
}