#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = 0;

void create();
void insertatbeg();
void insertatmid();
void insertatend();
void display();
void deleteatbeg();
void deleteatend();
void deleteatloc();

void main()
{
    int choice;
    while(1)
    {
        printf("\nOperations :\n1. Create\n2. Insert at beginning\n3. Insert at mid\n4. Insert at end\n5. Display\n6. Exit\n7. DeleteAtBeg\n8. Deleteatend\n9. Delete at loc\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            create();
            break;
        case 2:
            insertatbeg();
            break;
        case 3:
            insertatmid();
            break;
        case 4:
            insertatend();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        case 7:
            deleteatbeg();
            break;
        case 8:
            deleteatend();
            break;
        case 9:
            deleteatloc();
            break;
        default:
            printf("\nInvalid");
        }
    }
}

void create()
{
    struct node *newnode,*temp;
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
    printf("\nCreated Successfully");
}

void insertatbeg()
{
    struct node *newnode,*temp;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d",&newnode->data);

    newnode->next = head;
    head = newnode;
    printf("Successfully Inserted at Beginning.");
}

void insertatmid()
{
    int x;
    struct node *newnode,*temp;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d",&newnode->data);
    newnode->next = 0;

    printf("\nEnter the value after which you want to insert : ");
    scanf("%d",&x);

    temp = head;
    while(temp->next != 0 && temp->data == x)
    {
        temp = temp->next;
    }
    if(temp == 0)
    {
        printf("\nNo such element");
    }
    else
    {
        newnode->next = temp->next;
        temp->next = newnode;
    }
    printf("\nInserted Succesfully");
}

void insertatend()
{
    struct node *newnode,*temp;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d",&newnode->data);

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
        newnode->next = 0;
    }
    printf("\nInserted Successfully");
}

void display()
{
    if(head == 0)
        printf("\nCAnnot display!");
    else
        printf("\nLinked liSt :\n ");
        struct node *temp;
        temp = head;
        while(temp != 0)
            printf("%d\t",temp->data);
            temp = temp->next;
}

void deleteatbeg()
{
    struct node *temp;
    if(head == 0)
        printf("\nEmpty LL");
    else
        temp = head;
        head = head->next;
        free(temp);
}

void deleteatend()
{
    struct node *temp,*prevnode;
    if(head == 0)
        printf("\nEMPTY LL.");
    else
        temp = head;
        while(temp->next != 0)
            prevnode = temp;
            temp = temp->next;
        free(temp);
        prevnode->next = 0;
}

void deleteatloc()
{
    struct node *temp,*prevnode;
    int pos,count,i;
    printf("\nEnter position : ");
    scanf("%d",&pos);
    temp = head;
    while(i < pos-1)
    {
        temp = temp->next;
        i++;
    }
}


