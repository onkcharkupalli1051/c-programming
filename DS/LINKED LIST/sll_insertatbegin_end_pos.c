#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = 0;

void addatbegin();
void addatend();
void addatloc();
void display();

int main()
{
    int choice;
    while(1)
    {
        printf("\nOperations :\n\n1. ADD AT BEGINNING\n2. ADD AT END\n3. ADD AT LOCATION\n4. DISPLAY\n5. EXIT");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            addatbegin();
            break;
        case 2:
            addatend();
            break;
        case 3:
            addatloc();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
        default:
            printf("\nInvalid NO.");
        }
    }
    getch();
}

void addatbegin()
{
    int choice = 1;
    struct node *newnode,*temp;
    while(choice == 1)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter data to insert at beginning : ");
        scanf("%d",&newnode->data);
        newnode->next = head;
        head = newnode;
        printf("\nDo you want to contine adding at beginning? (1/0) : ");
        scanf("%d",&choice);
    }
}

//some error in here
void addatend()
{
    int choice = 1;
    struct node *newnode,*temp;

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to insert at end :");
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
            temp = temp->next;
        temp->next = 0;
        /*
        temp->next = newnode;
        temp = newnode; */
    }
}

void display()
{
    struct node *temp;
    if(head == 0)
        printf("\nLinked List is empty.");
    else
    {
        temp = head;
        printf("\nLinked list :\n");
        while(temp != 0)
        {
            printf("%d\t",temp->data);
            temp = temp->next;
        }
    }
}

