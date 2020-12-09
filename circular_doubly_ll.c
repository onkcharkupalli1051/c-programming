#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = 0,*temp;

void create()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d",&newnode->data);

    if(head == 0)
    {
        newnode->next = newnode;
        newnode->prev = newnode;
        head = newnode;
    }
    else
    {
        temp = head->prev;
        temp->next = newnode;
        newnode->prev = temp;
        newnode->next = head;
        head->prev = newnode;
    }
}

void insert()
{
    int choice;

    printf("\n1. Insert at beginning\n2. Insert at end\n3. Insert at location\nEnter choice : ");
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
    scanf("%d",&newnode->data);

    if(head == 0)
    {
        newnode->prev = newnode;
        newnode->next = newnode;
        head = newnode;
    }
    else
    {
        newnode->next = head;
        newnode->prev = head->prev;
        head->prev->next = newnode;
        head->prev = newnode;
        head = newnode;
    }
    printf("\n%d Entered Succesfully!");
}

void insertatend()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d",&newnode->data);

    if(head == 0)
    {
        newnode->next = 0;
        newnode->prev = 0;
        head = newnode;
    }
    else
    {
        newnode->prev = head->prev;
        newnode->next = head;
        head->prev->next = newnode;
        head->prev = newnode;
    }
}

void insertatloc()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    int loc,count= 1;

    printf("\nEnter data : ");
    scanf("%d",&newnode->data);

    if(head == 0)
    {
        newnode->next = newnode;
        newnode->prev = newnode;
        head = newnode;
    }
    else
    {
        int count = 1;
        printf("\nEnter Location to insert at : ");
        scanf("%d",&loc);
        temp = head;
        while(temp->next != head && count < loc-1)
        {
            count++;
            temp = temp->next;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next->prev = newnode;
        temp->next = newnode;
    }
    printf("%d Inserted At End",newnode->data);
}

void display()
{
    if(head == 0)
    {
        printf("\nLinked List is EMpty");
    }
    else
    {
        temp = head;
        printf("Doubly Circular Linked list : ");

        printf("%d ",temp->data);
        temp = temp->next;
        while(temp != head)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
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

