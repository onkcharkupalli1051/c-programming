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
void deletedata();
void deletefrombeg();
void deleteatloc();
void deleteatend();
void reverse();

void main()
{
    int choice;

    while(1)
    {
        printf("\nOperations :\n1. Create\n2. Exit\n3. Display\n4. Insert\n5. Calculate Length\n6. Delete data\n7. Reverse DLL\nEnter choice : ");
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
        case 6:
            deletedata();
            break;
        case 7:
            reverse();
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
        printf("\nInvalid insert operation");
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

        /*
              tail
            newnode
              head
          0    10   0

        */
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
        newnode->next = temp;

        head
        newnode                 tail
        10->         <-20    30  40   50
        12            20    28  36   44
        */
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

        /*



                   head            tail      newnode
        original :  10      20      30        40
        address :   44      52      60        70
        */
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
    int count=1;

    temp = head;
    while(temp != 0)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void deletedata()
{
    int choice;
    printf("\n1. Delete At Beginning\n2. Delete At Location\n3. Delete At End\nEnter choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        deletefrombeg();
        break;
    case 2:
        deleteatloc();
        break;
    case  3:
        deleteatend();
    default:
        printf("\nInvalid");
    }
}

void deletefrombeg()
{
    if(head == 0)
        printf("\nCannot Delete, Empty Dll");
    else
        temp = head->next;
        temp->prev = 0;
        free(head);
        head = temp;
        /*
        temp = head;
        head = head->next;
        head->prev = 0;
        free(temp);
        */
        printf("\nDeleted Succesfully!");
}

void deleteatend()
{
    if(head == 0)
        printf("\nCannot Delete, Empty Dll");
    else
        temp = tail->prev;
        temp->next = 0;
        tail = temp;
        free(tail);
        /*
        temp = tail;
        tail->prev->next = 0;
        tail = tail->prev;
        free(temp);
        */
        printf("\nDeleted Succesfully!");
}

void deleteatloc()
{
    if(head == 0)
        printf("\nCannot Delete, Empty Dll");
    else
    {
        int i = 1,pos;
        temp = head;

        printf("Enter position from 1 to %d which you want to delete : ",lenofdll());
        scanf("%d",&pos);
        while(i < pos)
        {
            temp = temp->next;
            i++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
        printf("\nDeleted Succesfully!");
    }
}

void reverse()
{
    struct node *nextnode,*current;
    if(head == 0)
        printf("\nCannot Reverse, Empty Dll");
    else
    {
        current = head;
        while(current != 0)
            nextnode = current->next;
            current->next = current->prev;
            current->prev = nextnode;
            current = nextnode;
        current = head;
        head = tail;
        tail = current;
    }

}
