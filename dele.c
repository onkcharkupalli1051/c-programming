#include<stdio.h>
#include<stdlib.h>

//FIFO

struct node
{
    int data;
    struct node *next;
};

struct node *front = 0, *rear = 0,*temp;

void enqueue()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter Data : ");
    scanf("%d",&newnode->data);
    newnode->next = 0;

    if(front == 0 && rear == newnode)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
    printf("\nEnqueued Succesfully");
}

void dequeue()
{
    if(front == 0 && rear == 0)
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("\n%d Dequeued Succesfully.",front->data);
        temp = front;
        front = front->next;
        free(temp);
    }
}

void display()
{
    if(front == 0 && rear == 0)
    {
        printf("\nEmpty");
    }
    else
    {
        temp = front;
        printf("\nQueue : ");
        while(temp != 0)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
}

void peek()
{
    if(front == 0 && rear == 0)
    {
        printf("\nEmpty");
    }
    else
    {
        printf("\nFront : %d",front->data);
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
}

