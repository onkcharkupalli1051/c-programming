#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = 0, *temp, *tail;

void create()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d",&newnode->data);
    newnode->next = 0;

    if(head == 0)
    {
        head = newnode;
        tail = newnode;
        tail->next = head;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
        tail->next = head;
        /*
        temp = head;
        while(temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = head;
        */
    }
    printf("\nCreated Succesfully!");
}

void display()
{
    if(head == 0)
        printf("\nLinked List is EMPTY");
    else
    {
        printf("\nLinked List : ");
        temp = head;
        while(temp->next != head)
        {
            printf("%d\t",temp->data);
            temp = temp->next;
        }
        printf("%d",temp->data);
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

    printf("Enter data : ");
    scanf("%d",&newnode->data);
    newnode->next = 0;

    if(head == 0)
    {
        head = newnode;
        temp = newnode;
        newnode->next = head;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
    printf("\nInserted Succesfully");
}

void insertatend()
{
    printf("\nInserted Succesfully");
}

void insertatloc()
{
    printf("\nInserted Succesfully");
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
            continue;
        }
    }
}
