#include<stdio.h>
#include<stdlib.h>

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

    printf("\nEnter data : ");
    scanf("%d",&newnode->data);
    newnode->next = 0;

    if(front == 0 && rear == 0)
    {
        front = newnode;
        rear->next = front;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}

void dequeue()
{
    if(front ==0 && rear == 0)
    {
        printf("\nEmpty Queue, Underflow");
    }
    else if(front == rear)
    {
        temp = front;
        printf("\n%d Dequeued succesfully",front->data);
        front = rear = 0;
        free(temp);
    }
    else
    {
        printf("\n%d Dequeued",front->data);
        temp = front;
        rear = front->next;
        front = front->next;
        free(temp);
    }
}

void peek()
{
    if(front ==0 && rear == 0)
    {
        printf("\nEmpty Queue");
    }
    else
    {
        printf("Front Data : ",front->data);
    }
}

void display()
{
    if(front ==0 && rear == 0)
    {
        printf("\nEmpty Queue");
    }
    else
    {
        temp = front;
        printf("\nCircular Queue");
        while(temp->next != front)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("%d ",temp->data);
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
