#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = 0;
struct node *temp;

void create();
void insertatend();
void lenofll();
void display();

void main()
{
    int choice;
    while(1)
    {
        printf("\nOperations :\n1. Create\n2. Insert at end\n3. Find length\n4. Exit\n5. Display\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            create();
            break;
        case 2:
            insertatend();
            break;
        case 3:
            lenofll();
            break;
        case 4:
            exit(0);
        case 5:
            display();
            break;
        default:
            printf("\nInvalid Choice");
            break;
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

    if(head == 0)
    {
        head = newnode;
        temp = newnode;
    }
    else
    {
        temp = head;
        while(temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    printf("\nInserted Successfully.");
}

void insertatend()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d",&newnode->data);

    temp = head;
    while(temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = 0;
    printf("Inserted Succesfully at the end.");
}

void lenofll()
{
    int count = 0;
    temp = head;

    while(temp->next != 0)
    {
        count++;
        temp = temp->next;
    }
    printf("\nLength of linked list : %d",count+1);
}

void display()
{
    temp = head;
    printf("\n\nLinked list is : ");
    while(temp->next != 0)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}

void delete()
{
    /*
    int k;
    struct node *r;
    r = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the element you want to delete : ");
    scanf("%d",&k);

    temp = head;
    while(temp->next != 0 && temp->data != k)
    {
        r = temp;
        temp = temp->next;
    }

    if(temp == head)
    {
        head = temp->next;
        free(temp);
    }
    else
    {
        r->next = p->next;
        free(p);
    }
    printf("\nDeleted Successfully"); */
    return 0;
}
