#include"stdio.h"
#include"stdlib.h"
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head=NULL;

void addatend(int);
void addatbeg(int);
void display();
void addafterval(int,int);
void delatbeg();
void delatend();
void delspec(int);

int main()
{
    display();
    addatend(10);
    addatend(20);
    addatend(30);
    addatend(40);
    addatend(50);
    addatend(999);
    display();

    addatbeg(888);
    display();

    addafterval(777,20);//add 666 after 20
    display();

    delatbeg();
    display();

    delatend();
    display();

    delspec(777);
    display();

}

void delspec(int x)
{
    struct Node *temp;

    if(head==NULL)
    {
     printf("\nError: linked list is empty so can't delete item");
    }
    else
    {
        if(head->data == x)
        {
            if(head->next==NULL)
            {
              temp=head;
              head=NULL;
              free(temp);
            }
            else
            {
                temp=head;
                head=temp->next;
                head->prev=NULL;
                free(temp);
            }
        }
        else
        {
            temp=head;

            while(temp->data!=x)
            {
                temp=temp->next;

                if(temp==NULL)
                {
                    printf("\nError: no element with value %d, so can't delete",x);
                    return;
                }
            }
            if(temp->next==NULL)
            {
                temp->prev->next=NULL;
                free(temp);
            }
            else
            {
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
                free(temp);
            }
        }
    }
}

void delatend()
{
    struct Node *temp;

    if(head==NULL)
    {
     printf("\nError: linked list is empty so can't delete item");
    }
    else
    {
        if(head->next==NULL)
        {
            temp=head;
            head=NULL;
            free(temp);
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            //temp->prev->next=NULL;
            //free(temp);
            //OR
            temp=temp->prev;
            free(temp->next);
            temp->next=NULL;
        }
    }
}
void delatbeg()
{
    struct Node *temp;

    if(head==NULL)
    {
     printf("\nError: linked list is empty so can't delete item");
    }
    else
    {
        if(head->next == NULL)
        {
            temp=head;
            head=NULL;
            free(temp);

        }
        else
        {
            temp=head;
            head=head->next;
            head->prev=NULL;
            free(temp);
        }
    }

}
void addafterval(int x,int val)
{

    struct Node *newNode,*temp;

    newNode=(struct Node *) malloc(sizeof(struct Node));
    newNode->data=x;

    if(head==NULL)
    {
     printf("\nError: linked list is empty(No node with value %d), so can't add %d",val,x);
    }
    else
    {
        temp=head;

        while(temp!=NULL)
        {
            if(temp->data==val)
            {
                newNode->next=temp->next;
                if(temp->next!=NULL) temp->next->prev=newNode;
                temp->next=newNode;
                newNode->prev=temp;
                break;
            }
            temp=temp->next;
        }
        if(temp==NULL)
        {
         printf("\nError: No node with value %d, so can't add %d",val,x);
        }
    }
}
void addatbeg(int x)
{
    struct Node *newNode,*temp;
    newNode=(struct Node*) malloc(sizeof(struct Node));
    newNode->data=x;

    if(head==NULL)
    {
      newNode->prev=NULL;
      newNode->next=NULL;
      head=newNode;
    }
    else
    {
      temp=head;
      temp->prev=newNode;
      newNode->next=temp;
      newNode->prev=NULL;
      head=newNode;
    }

}
void addatend(int x)
{
    struct Node *newNode,*temp;
    newNode=(struct Node*) malloc(sizeof(struct Node));
    newNode->data=x;

    if(head==NULL)
    {
        newNode->prev=NULL;
        newNode->next=NULL;
        head=newNode;
    }
    else
    {
        temp=head;

        while(temp->next!=NULL)
            temp=temp->next;

        newNode->prev=temp;
        newNode->next=NULL;
        temp->next=newNode;
    }
}

void display()
{

    struct Node *temp,*temp1,*temp2;

    if(head==NULL)
    {
        printf("\nDoubly linked list is empty.");
    }
    else
    {
        temp=head;
        temp1=head;
        printf("\nDoubly linked list is: ");
        while(temp!=NULL)
        {
            temp2=temp;
          printf("%d   ",temp->data);
            temp=temp->next;
        }

    }
}
