// adding new between nodes
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
void insertatposition(int position, int data){
    struct node *temp = head;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;

for(int i = 1; i <position; i++){
    temp = temp-> next;
}

newNode->next=temp->next;
temp->next=newNode;
    }

int main()
{
    insert(5);
    insert(10);
    insert(15);
    
    struct node *temp = head;
    while (true)
    {
        printf("%d | %p | \n", temp->data, temp->next);
        temp = temp->next;
        if (temp==NULL){
            break;
        }
    }
    insertatposition(2,25);
    insertatposition(3,35);
    insertatposition(1,45);

    temp = head;
    printf("Linked List:\n");
    while (true)
    {
        printf("%d | %p | \n", temp->data, temp->next);
        temp = temp->next;
        if (temp==NULL){
            break;
        }
    }


    return 0;
}