
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define maxsize 5
int tos=-1;
int stack[maxsize];

void push(int x){
    if (tos==maxsize-1){
        printf("Stack overflow\n");
    }
    else{
        tos++;
        stack[tos]=x;
    }
}

void pop(){
    if (tos==-1){
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

void main(){
    push(5);
    push(8);
    push(7);
    push(4);
    push(1);
    push(2);
    print();
    printf("\n\nPoping\n\n");
    pop();
    print();    

}
