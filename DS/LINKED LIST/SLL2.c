#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

void addatend(int);
void display();
void addatbeg(int);

int main()
{
    display();

    addatbeg(10);
    display();

    addatend(20);
    display();

    addatend(30);
    display();

    addatend(40);
    display();

    addatend(50);
    display();

    addatbeg(60);
    display();

    addatbeg(70);
    display();
}

void addatend(int x)
{
    struct Node *temp, *newNode;


    newNode=(struct Node*) malloc(sizeof(struct Node));
    newNode->data=x;
    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
           temp=temp->next;
        temp->next=newNode;
    }
}

void addatbeg(int x)
{
    struct Node *newNode;

    newNode=(struct Node*) malloc(sizeof(struct Node));
    newNode->data=x;
    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        newNode->next=head;
        head=newNode;
    }
}

void display()
{
    struct Node *temp;

    if(head==NULL)
        printf("\nLinked list is empty");
    else
    {
        temp=head;
        printf("\nLinked list is: ");
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}
