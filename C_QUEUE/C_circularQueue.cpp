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
    if (front == ((rear + 1)%maxsize))
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
        rear = (rear + 1) % maxsize;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (isEmpty())
    {

        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % maxsize;
    }
}

void print()
{
    int i;
    if (isEmpty())
    {
        printf("Queue is empty\n");
    }
    else
    {
        for (i = front; i != rear; i = (i + 1) % maxsize)
        {
            printf("%d\n", queue[i]);
        }
        printf("%d\n", queue[i]); /* To print the rear element of queue */
        printf("front: %d\trear: %d\n", front, rear);
        printf("\n\n");
    }
}

void frontValue()
{
    printf("%d", front);
}

void rearValue()
{
    printf("%d", rear);
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    print();
    enqueue(6);
    dequeue();
    dequeue();
    dequeue();
    print();
    enqueue(6);
    enqueue(7);
    enqueue(8);
    print();
    enqueue(9);
}