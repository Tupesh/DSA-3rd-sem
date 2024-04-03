
#include<stdio.h>
#include<stdlib.h>

#define maxsize 5
int tos=-1;
int stack[maxsize];

bool isEmpty(){
    if (tos==-1){
        return true;
    }
    return false;
}

bool isFull(){
    if (tos==maxsize-1){
        return true;
    }
    return false;
}

void push(int x){
    if (isFull()){
        printf("Stack overflow\n");
    }
    else{
        tos++;
        stack[tos]=x;
    }
}

void pop(){
    if (isEmpty()){
        printf("Stack is empty");
    }
    else{
        tos--;
    }
}

void print(){
    for (int i=tos;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}

void printTOS(){
    printf("Stack top element: %d\nStack's index: %d ",stack[tos], tos);
}

int main(){
    push(5);
    push(8);
    push(7);
    push(4);
    push(1);
    print();
    printf("\n\nPoping\n\n");
    pop();
    printTOS();    

}
