#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int main(){
    struct node * one=(struct node *)malloc(sizeof(struct node));
    struct node * two=(struct node *)malloc(sizeof(struct node));
    struct node * three=(struct node *)malloc(sizeof(struct node));
    
    
    struct node * head=one;

    // Assigning data's value
    one->data=34;
    two->data=68;
    three->data=52;
    
    // Assigning pointer reference
    one->next=two;
    two->next=three;
    three->next=one;

    // Temporary node for loop
    struct node * temp=head;
    
    //Looping through the node
    do
    {
        printf("%d \t %d \n",temp->data,temp->next);
        temp=temp->next;
    }while (temp!=head);
    


}