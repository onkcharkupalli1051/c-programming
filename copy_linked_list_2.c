//Copying the Linked List 222

//The easy one


#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *start1=NULL, *start2=NULL;

void create(int num, int ll);

void Copy();

void Display(int i);

void create(int num, int ll)
{

    struct node *newp,*a;
    newp=(struct node*)malloc(sizeof(struct node));
    newp->data=num;

    if(ll==1)
    {
    	if(start1==NULL)
    	{
        	newp->next=NULL;
        	start1=newp;
    	}

    	else
    	{
        	a=start1;
        	while(a->next!=NULL)
		{
                a=a->next;
        	}
        a->next=newp;
        newp->next=NULL;
    	}
    }
    else
    {
        if(start2==NULL)
	{
        newp->next=NULL;
        start2=newp;
    	}
    	else
	{
        	a=start2;
        	while(a->next!=NULL)
		{
                a=a->next;
        	}
        	a->next=newp;
        	newp->next=NULL;
    	}

    }
}

void Display(int i)
{

    struct node *start;

    if(i==1)
    {
        start=start1;
        printf("\n Elements in Linked List no. %d : ",i);
    }

    else if(i==2)
    {
        start=start2;
        printf("\n Elements in Linked List no. %d : ",i);
    }

    else
    {
        printf(" ");
    }

    while(start!=NULL){
        printf("%d ", start->data);
        start=start->next;
    }
    printf("\n");
}

void Copy()
{

    struct node *a=start1;

    while(a!=NULL){
        create(a->data,2);
        a=a->next;
    }

}


int main()
{
    int x;
    printf("\n  Creation of a linked list\n");
    while(1)
    {
        printf("\n  Enter Data :");
        scanf("%d",&x);
        create(x,1);
        printf("\n  Do you want to continue ?   1.Yes   2.No  ---");
        scanf("%d",&x);
        if(x==2){
            break;
        }
    }
    Display(1);
    printf("\n");
    printf("\n  Copying the Linked List...");
    for(x=0;x<3;x++){
        printf("\n  ...");
    }

    Copy();

    printf("\n  The Linked List is copied successfully !\n\n");

    Display(1);
    Display(2);

    return 0;
}



