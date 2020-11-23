#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void create();
void insertatend();
void copy();
void display();

struct node *head = 0,*head2 = 0, *temp, *temp2;

void main()
{
    int choice;

    while(1)
    {
        printf("\nOPERATIONS :\n1. CREATE LL\n2. INSERT AT END\n3. COPY INTO ANOTHER\n4. DISPLAY\n5. EXIT\nEnter choice : ");
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
            copy();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("\nInvalid INput");
        }
    }
    getch();
}

void create()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data");
    scanf("%d",&newnode->data);

    if(head == 0)
    {
        newnode->next = 0;
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
    printf("Created Succesfully.");
}

void insertatend()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d",&newnode->data);
    newnode->next = 0;

    temp->next = newnode;
    temp = newnode;
    /*
    temp = head;
    while(temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    */
    printf("Inserted Succesfully.");
}

void display()
{
    int c;

    printf("\nEnter 1 to print original linked list, 2 to print copied linked list : ");
    scanf("%d",&c);
    if(c == 1)
    {
        printf("\nOriginal Linked List :");

        temp = head;
        while(temp != 0)
        {
            printf("%d\t",temp->data);
            temp = temp->next;
        }
    }
    else if(c == 2)
    {
        printf("\nCopied Linked List :\n");

        temp2 = head2;
        while(temp2 != 0)
        {
            printf("%d\t",temp2->data);
            temp2 = temp2->next;
        }
    }
}

void copy()
{
    struct node *newnode;


    if(head == 0)
        printf("\nCannot copy, EMPTY LINKED LIST");
    else
    {
    temp = head;
    while(temp != 0)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = temp->data;

        if(head2 == 0)
        {
            head2 = newnode;
            temp2 = newnode;
            newnode->next = 0;
        }
        else
        {
            temp2 = head2;
            while(temp2->next != 0)
            {
                temp2 = temp2->next;
            }
            temp2->next = newnode;
            newnode->next = 0;
        }
        temp = temp->next;
    }
    }
}
