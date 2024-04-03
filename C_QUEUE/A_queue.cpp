
#include <stdio.h>
#include <stdlib.h>

#define maxsize 5

int front = -1;
int rear = -1;
int queue[maxsize];

bool isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    return false;
}

bool isFull()
{
    if (rear == maxsize - 1)
    {
        return true;
    }
    return false;
}

void enqueue(int x)
{
    if (isFull())
    {
        printf("Queue is full\n\n");
    }
    else if (isEmpty())
    {
        rear = front = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (isEmpty())
    {
        rear = front = 0;
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void print()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
        printf("front:%d\trear%d\n", front, rear);
        printf("\n\n");
    }
}

void frontValue(){
    printf("%d",front);

}


void rearValue(){
    printf("%d",rear);
}


int main()
{
    enqueue(43);
    enqueue(7);
    enqueue(3);
    enqueue(5);
    enqueue(51);
    enqueue(1);
    print();
    dequeue();
    dequeue();
    dequeue();
    print();
 }