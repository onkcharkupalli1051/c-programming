#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = 0,*rear=0;

void enqueue()
{
    if(front == 0 && rear == 0)
    {
        struct node *newnode;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter data : ");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        front = rear = newnode;
    }
    else
    {
        struct node *newnode;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter data : ");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        rear->next = newnode;
        rear = newnode;
    }
    printf("\nEnqueued Succesfully");
}

void dequeue()
{
    if(front == 0 && rear == 0)
    {
        printf("\nEmpty QUeue");
    }
    else
    {
        struct node *temp;
        temp = front;
        printf("\n%d Dequeued Succesfully",front->data);
        front = front->next;
        free(temp);
    }
}

void display()
{
    if(front == 0 && rear == 0)
    {
        printf("\nEmpty Queue");
    }
    else
    {
        struct node *temp;
        printf("\nQueue : ");
        temp = front;
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
        printf("\nEMpty Queue");
    }
    else
    {
        printf("Front Data : %d",front->data);
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
