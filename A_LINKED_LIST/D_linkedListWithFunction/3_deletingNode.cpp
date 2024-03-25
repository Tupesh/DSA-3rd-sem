// Delete nodes form first and last
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
    
void deleteFirst()
{
	head=head->next;
}

void deleteLast()
{
	struct node *temp =head;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=NULL;
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insertatposition(2,4);
    insertatposition(3,5);
    insertatposition(1,6);
    struct node *temp = head;
    while (true)
    {
        printf("%d | %p |\n", temp->data, temp->next);
        temp = temp->next;
        if (temp==NULL){
            break;
        }
    }




   	deleteFirst();
	deleteLast();

    temp = head;
    printf("\n\nLinked List:\n");
    while (true)
    {
        printf("%d | %p |\n", temp->data, temp->next);
        temp = temp->next;
        if (temp==NULL){
            break;
        }
    }


    return 0;
}
