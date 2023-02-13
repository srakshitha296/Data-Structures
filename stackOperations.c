#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5

int stack[MAXSIZE], top = -1;

void push();
void pop();
void display();

void main()
 {
    int choice;
    while(1) 
    {
        printf("Enter\n1 to push\n2 to pop\n3 to display\n");
        scanf("%d", &choice);
            switch(choice) 
            {
                case 1: push();
                        break;
                case 2: pop();
                        break;
                case 3: display();
                        break;
                case 0: exit(0);
                        break;
                default: printf("Invalid Choice");
            }
    }
}

void push()
{
    int element;
    if(top == (MAXSIZE-1))
    {
        printf("STACK OVERFLOW");
        return;
    }
    else
    {
        printf("Enter the element to be pushed :");
        scanf("%d",&element);
        stack[++top]=element;
    }
}

void pop(){
 if(top == -1) {
    printf("STACK UNDERFLOW");
 }else {
    printf("Element popped is : %d",stack[top--]);
 }
}



void display()
{
    if(top == -1) 
    {
        printf("STACK UNDERFLOW");
    }
      else 
    {
        printf("The elements of the Stack are :");
        for(int i=top; i>=0; i--)
        {
        printf("%d\t",stack[i]);
        }
    }
}