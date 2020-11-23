#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next,*prev;
};

struct node *head = 0, *temp, *tail;

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
        printf("\nOperations :\n1. Create\n2. Exit\n3. Display\n4. Insert\n5. Calculate Length\nEnter choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            create();
            break;
        case 2:
            exit(0);
        case 3:
            display();
            break;
        case 4:
            insert();
            break;
        case 5:
            lenofdll();
            break;
        default:
            printf("\nInvalid Selection");
        }
    }
    getch();
}

void create()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    newnode->prev = 0;

    if(head == 0)
    {
        head = newnode;
        temp = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        newnode->next = 0;
        tail = newnode;
        /*
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
        /*
        temp = head;
        while(temp->next != 0)
        {
            temp = temp->next;
        }
        newnode->prev = temp;
        temp->next = newnode;
        newnode->next = 0;
        */
    }
    printf("\nCreated Succesfully");
}

void display()
{
    printf("\nDoubly Linked List : ");
    temp = head;
    while(temp != 0)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}

void insert()
{
    int choice;
    printf("\n1. Insert At Beginning\n2. Insert At Location\n3. Insert At End\nEnter choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        insertatbeg();
        break;
    case 2:
        insertatloc();
        break;
    case  3:
        insertatend();
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
        head = newnode;
        temp = newnode;
        newnode->prev = 0;
        newnode->next = 0;
        tail = newnode;
    }
    else
    {
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
        /*
        head->prev = newnode;
        temp = head;
        head = newnode;
        newnode->prev = 0;
        newnode->next = temp;*/
    }
}

void insertatend()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d",&newnode->data);

    if(head == 0)
    {
        head = newnode;
        temp = newnode;
        tail = newnode;
        newnode->prev = 0;
        newnode->next = 0;
    }
    else
    {
        newnode->prev = tail;
        tail->next = newnode;
        newnode->next = 0;
        tail = newnode;
    }
}

void insertatloc()
{
    int pos;

    printf("\nEnter position (1,%d) : ",lenofdll());
    scanf("%d",&pos);

    if(pos == 1)
    {
        insertatbeg();
    }
    if(pos == lenofdll())
    {
        insertatend();
    }
    else
    {
        int i=1;
        struct node *newnode;
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("\nEnter data : ");
        scanf("%d",&newnode->data);

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
