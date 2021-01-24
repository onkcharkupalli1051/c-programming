#include<stdio.h>
#include<stdlib.h>

#define N 10

int queue[N];
int front = -1;
int rear = -1;

void enqueue()
{
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        printf("\nEnter data : ");
        scanf("%d",&queue[rear]);
    }
    else if((rear+1)%N == front)
    {
        printf("\nQueue Is Full");
    }
    else
    {
        rear = (rear+1)%N;
        rear++;
        printf("\nEnter data : ");
        scanf("%d",&queue[rear]);
    }
    printf("\nEnqueued Succesfully");
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("\nEmpty Queue");
    }
    else if(front == rear)
    {
        printf("\n%d Dequeued Succesfully",queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("\n%d Dequeued Succesfully",queue[front]);
        front = (front+1)%N;
    }
}

void display()
{
    int i = front;
    if(front == -1 && rear == -1)
    {
        printf("\nEmpty Queue");
    }
    else
    {
        printf("\nDisplay of Queue : ");
        while(i != rear)
        {
            printf("%d ",queue[i]);
            i = (i+1)%N;
        }
    }
}

void peek()
{
    if(front == -1 && rear == -1)
    {
        printf("EMpty QUeue");
    }
    else
    {
        printf("\nFront Data : ",queue[front]);
    }
}

void main()
{
    int choice;

    while(1)
    {
        printf("\nOperations :\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit");
        printf("\nEnter choice : ");
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
            printf("\nInvalid");
        }
    }
}
