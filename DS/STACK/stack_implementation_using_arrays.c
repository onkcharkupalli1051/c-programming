#include<stdio.h>
#include<stdlib.h>

#define N 5
int stack[N];
int top = -1;

void push();
void pop();
void peek();
void display();

void main()
{
    int choice;

    while(1)
    {
        printf("\n\nOPerations :\n1. Push\n2. Pop\n3. Top/Peek\n4. Display\n5. Exit\nEnter choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("\nInvalid");
        }
    }
    getch();
}

void push()
{   if(top == N-1)
        printf("Cannot push! Overflow");
    else
        top++;
        printf("\nPUSH OPERATION :\nEnter data : ");
        scanf("%d",&stack[top]);
        printf("\nInserted Succesfully.");
}

void pop()
{
    if(top == -1)
        printf("\nInvalid Operation! Underflow");
    else
        printf("\nPOP Operation\nPopped Element : %d",stack[top]);
        top--;
        printf("\nPopped Succesfully.");
}

void peek()
{
    if(top == -1)
        printf("\nEmpty Stack");
    else
        printf("\nTOP Operation\nTop Element : %d",stack[top]);
        printf("\nTopped Succesfully.");
}

void display()
{
    if(top == -1)
        printf("Empty Stack");
    else
    {
        int i;
        printf("\nDisplay Of Stack : ");
        for(i = top;i >= 0; i--)
            printf("%d\t",stack[i]);
    }
}
