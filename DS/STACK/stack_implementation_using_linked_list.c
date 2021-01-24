#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *link;
};

struct node *top = 0;

void push();
void pop();
void peek();
void display();

void main()
{
    int choice;

    while(1)
    {
        printf("\n\nOPerations :\n1. Push\n2. Pop\n3. Top/Peek\n4. Display\n5. Exit\nEnter choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("\nInvalid");
        }
    }
    getch();
}

void push()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter Data : ");
    scanf("%d",&newnode->data);
    newnode->link = top;
    top = newnode;
}

void display()
{
    if(top == 0)
        printf("\nERROR, EMPTY LIST");
    else
    {
        struct node *temp;
        temp = top;

        while(temp != 0)
        {
            printf("%d\t",temp->data);
            temp = temp->link;
        }
    }
}

void peek()
{
    if(top == 0)
        printf("\nERROR, STACK EMPTY");
    else
    {
        printf("\nTOP DATA : %d",top->data);
    }
}

void pop()
{
    if(top == 0)
        printf("\nERROR UNDERFLOW, STACK EMPTY");
    else
    {
        struct node *temp;
        printf("\nPOPPED DATA : %d",top->data);
        temp = top;
        top = top->link;
        free(temp);
    }
}
