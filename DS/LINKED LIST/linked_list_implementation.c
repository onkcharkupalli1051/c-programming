#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int choice = 1;
    struct node *newnode,*head,*temp;
    head = 0;
    newnode = (struct node*)malloc(sizeof(struct node));

    while(choice == 1)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter data :");
        scanf("%d",&newnode->data);
        newnode->next = 0;

        if(head == 0)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to cont. (1/0) : ");
        scanf("%d",&choice);
        if(choice == 1)
            continue;
        else
            break;
    }

    //printing the linked list
    temp = head;
    printf("\nLinked list :\n");
    while(temp != 0)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }
    getch();
}

