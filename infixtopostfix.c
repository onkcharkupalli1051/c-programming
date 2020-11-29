#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define SIZE 50

char stack[SIZE];
int top = -1;

int isfull()
{
    if(top == SIZE-1)
        return 1;
    else
        return 0;
}

int isempty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}
void push(char op)
{
    if(isfull())
        printf("\nStack is Full");
    else
    {
        top++;
        stack[top] == op;
    }
}

char pop()
{
    char op = '0';
    if(isempty())
        printf("\nStack is Empty");
    else
    {
        op = stack[top];
        top--;
    }
    return op;
}

int isoperator(char ele)
{
    if(ele == '^' || ele == '/' || ele == '*' || ele == '+' || ele == '-')
        return 1;
    else
        return 0;
}

int precedence(char op)
{
    if(op == '^')
        return 3;
    else if(op == '*' || op == '/')
        return 2;
    else if(op == '+' || op == '-')
        return 1;
    else
        return 0;
}

void infixtopostfix(char infix[], char postfix[])
{
    int i=0,j=0;
    char item,x;
    push('(');
    strcat(infix,")");
    item = infix[i];

    while(item != '\0')
    {
        if(item == '(')
            push(item);
        else if(isdigit(item) || isalpha(item))
        {
            postfix[j] = item;
            j++;
        }
        else if(isoperator(item) == 1)
        {
            x = pop();
            while(isoperator(x) == 1 && precedence(x) >= precedence(item))
            {
                postfix[j] = x;
                j++;
                x = pop();
            }
            push(x);
            push(item);
        }
        else if(item == ')')
        {
            x = pop();
            while(x != '(')
            {
                postfix[j] = x;
                j++;
                x = pop();
            }
        }
        else
        {
            printf("\nInvalid Expression");
            break;
        }
        i++;
        item = infix[i];
    }
    postfix[j] = '\0';
}
void main()
{
    char infix[SIZE],postfix[SIZE];
    printf("\nEnter infix Expression : ");
    gets(infix);
    infixtopostfix(infix,postfix);
    printf("\nPostfix Expression : ");
    puts(postfix);
    getch();
}
