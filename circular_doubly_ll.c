#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next,*prev;
};

struct node *head = 0,*tail,*temp;

void create()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d",newnode->data);

    if(head == 0)
    {
        head = newnode;
        newnode->next = head;
        newnode->prev = head;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        head->prev = newnode;
        tail = newnode;
    }
}

void insert()
{
    int choice;

    printf("\n1. Insert at beginning\n2. INsert at end\nInsert at location\nEnter choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        insertatbeg();
        break;
    case 2:
        insertatend();
        break;
    case 3:
        insertatloc();
        break;
    default:
        printf("\nInvalid");
    }
}

void insertatbeg()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d",newnode->data);

    if(head == 0)
    {
        head = newnode;
        newnode->next = head;
        newnode->prev = head;
        tail = newnode;
    }
    else
    {
        newnode->next = head;
        newnode->prev = head->prev;
        head->prev = newnode;
        tail->next = newnode;
        head = newnode;
    }
}

void insertatend()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d",newnode->data);

    if(head == 0)
    {
        head = newnode;
        newnode->next = head;
        newnode->prev = head;
        tail = newnode;
    }
    else
    {
        newnode->next = head;
        newnode->prev = tail;
        tail->next = newnode;
        head->prev = newnode;
    }
}

void insertatloc()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    int loc,count= 1;

    printf("\nEnter data : ");
    scanf("%d",newnode->data);

    if(head == 0)
    {
        head = newnode;
        newnode->next = head;
        newnode->prev = head;
        tail = newnode;
    }
    else
    {
        printf("\nEnter Location to insert at : ");
        scanf("%d",&loc);
        temp = head;
        while(temp->next != head && count < loc-1)
        {
            count++;
            temp = temp->next;
        }
        newnode->next = temp->next;
        newnode->prev = temp->prev;
        temp->next->prev = newnode;
        temp->prev->next = newnode;
    }
}

void display()
{
    temp = head;
    printf("Doubly Circular Linked list : ");

    while(temp->next != head)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("%d ",temp->data);
}

void main()
{
    int choice;

    while(1)
    {
        printf("\n\nOPERATIONS : ");
        printf("\n1. Create\n2. Display\n3. Exit\n4. Insert");
        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        case 4:
            insert();
            break;
        default:
            printf("\nInvalid, Try again");
        }
    }
    return 0;
}

