#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = 0,*temp,*tail;

void create();
void display();
void insert();
void insertatbeg();
void insertatend();
void insertatloc();
int lenofdll();

void main()
{
    int choice;

    while(1)
    {
        printf("\nOperations :\n1. Create\n2. Display\n3. Insert\n4. Calculate Length\n5. Exit\nEnter choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
        case 3:
            insert();
            break;
        case 4:
            lenofdll();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\nInvalid Selection");
    }
}

void create()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    if(head == 0)
    {
        printf("\nCreation OF DLL: \nEnter data : ");
        scanf("%d",&newnode->data);
        newnode->prev = 0;
        newnode->next = 0;
        tail = newnode;
    }
    else
    {
        printf("\nCreation OF DLL: \nEnter data : ");
        scanf("%d",&newnode->data);
        newnode->prev = tail;
        newnode->next = 0;
        tail->next = newnode;
        tail = newnode;
    }
    printf("\nCreated Successfully");
}

void display()
{
    printf("\nDisplay of DLL :");
    temp = head;
    while(temp != 0)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}

void insert()
{
    int ch;

    while(1)
    {
        printf("\nInsertion operation :\n1. Insert at Beginning\n2. Insert at End\n3. Insert At position\nEnter choice : ");
        scanf("%d",&ch);

        switch(ch)
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
}

void insertatbeg()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nInsertion OF Data at beginning: \nEnter data : ");
    scanf("%d",&newnode->data);

    newnode->next = head;
    newnode->prev = 0;
    head = newnode;

    printf("\nInserted Successfully");
}

void insertatend()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nInsertion OF data at end of DLL: \nEnter data : ");
    scanf("%d",&newnode->data);

    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}

void insertatloc()
{
    int i = 1;
    int pos;

    printf("Enter location ( From 1 to %d) : ",lenofdll());
    scanf("%d",&pos);
    if(pos == 1)
    {
        insertatbeg();
    }
    else if(pos == lenofdll())
    {
        insertatend();
    }
    else
    {
        struct node *newnode;
        newnode = (struct node*)malloc(sizeof(struct node));

        temp = head;
        while(i < pos-1)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
}

int lenofdll()
{
    int count;

    temp = head;
    while(temp != 0)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
