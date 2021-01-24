#include<stdio.h>
#include<stdlib.h>

#define N 10

int queue[N];
int front = -1, rear = -1;

void enqueue()
{
    if(rear == N-1)
    {
        printf("\nOverflow Condition.");
    }
    else if(front== -1 && rear == -1)
    {
        front=rear=0;
        printf("\nEnter data : ");
        scanf("%d",&queue[rear]);
        printf("\nEntered Succesfully!");
    }
    else
    {
        rear++;
        printf("\nEnter data : ");
        scanf("%d",&queue[rear]);
        printf("\nEntered Succesfully!");
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("\nUnderflow Condition");
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("\n%d Dequeued Succesfully",queue[front]);
        front++;
    }
}

void peek()
{
    if(front == -1 && rear == -1)
    {
        printf("\nEMpty Queue");
    }
    else
    {
        printf("\nFRONT DATA : %d",queue[front]);
    }
}

void display()
{
    if(front == -1 && rear == -1)
    {
        printf("\nEmpty Queue");
    }
    else
    {
        printf("\nQueue :");
        for(int i=front;i<rear+1;i++)
        {
            printf(" %d",queue[i]);
        }
    }
}
void main()
{
    int choice;

    while(1)
    {
        printf("\n\nOperations :\n1. Enqueue\n2. Dequeue\n3. Peek/Front\n4. Display\n5. Exit\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
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
            printf("\nInvalid Choice");
        }
    }
    getch();
}

