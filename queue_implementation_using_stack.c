#include<stdio.h>
#include<conio.h>

#define N 5

int s1[N],s2[N];

int top1 = -1, top2 = -1;
int count = 0;

void enqueue()
{
    int x;
    printf("\nEnter data : ");
    scanf("%d",&x);
    push1(x);
    count++;
}

void push1(int x)
{
    if(top1 == N-1)
    {
        printf("\nOverflow.");
    }
    else
    {
        top1++;
        s1[top1] = x;
    }
    printf("\nEntered Succesfully");
}

void dequeue()
{
    if(top1 == -1 && top2 == -1)
    {
        printf("\nUnderflow");
    }
    else
    {
        for(int i =0; i<count; i++)
        {
            int a = pop1();
            push2(a);
        }
        int b = pop2();
        printf("%d",b);
        count--;
        for(int i = 0; i < count; i++)
        {
            int a = pop2();
            push1(a);
        }
    }
}

void push2(int data)
{
    if(top2 == N-1)
    {
        printf("\nOverflow.");
    }
    else
    {
        top2++;
        s2[top2] = data;
    }
    printf("\nEntered Succesfully");
}

int pop1()
{
    return s1[top1--];
}

int pop2()
{
    return s2[top2--];
}

void display()
{
    if(top1 == -1)
    {
        printf("\nEmpty Queue");
    }
    else
    {
        int i;
        printf("\nDisplay : ");
        for(i = 0;i<top1+1;i++)
        {
            printf("%d ",s1[i]);
        }
    }
}

void peek()
{
    if(top1 == -1)
    {
        printf("\nEmpty Queue");
    }
    else
    {
        int i = 0;
        printf("\nFront : %d",s1[i]);
    }
}

void main()
{
    int choice;

    while(1)
    {
        printf("\nOperations :\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit");
        printf("\nEnter choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
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
}
