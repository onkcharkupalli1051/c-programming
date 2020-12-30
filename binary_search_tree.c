#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct mode *right;
};

struct node *tree = NULL,*temp;

void create()
{
    struct node *newnode;
    int key,x;

    do
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter Data : ");
        scanf("%d",&newnode->data);
        key = newnode->data;
        newnode->left = NULL;
        newnode->right = NULL;

        if(tree == NULL)
        {
            tree = newnode;
        }
        else
        {
            temp = tree;
            while(key != temp->data)
            {
                if(key < temp->data)
                {
                    if(temp->left == NULL)
                    {
                        temp->left = newnode;
                    }
                    else
                    {
                        temp = temp->left;
                    }
                }
                else if(key > temp->data)
                {
                    if(temp->right == NULL)
                    {
                        temp->right = newnode;
                    }
                    else
                    {
                        temp = temp->right;
                    }
                }
            }
        }
        printf("\nDo you want to continue entering data (1. Yes/ 2.NO): ");
        scanf("%d",&x);
    }
    while(x != 2);
}

void search()
{
    int key;
    temp = tree;

    printf("\nEnter data to search : ");
    scanf("%d",&key);

    if(searchcode(tree,key))
    {
        printf("%d Found.",key);
    }
    else
    {
        printf("%d not found.",key);
    }

    /*
    while(temp != NULL && temp->data != key)
    {
        if(key < temp->data)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }

        if(temp == NULL)
        {
            printf("\n%d Not Found.",key);
        }
        else
        {
            printf("\n%d Found.",key);
        }
    }*/
    return;
}

void searchcode(struct node *tree,int key)
{
    if(tree == NULL || tree->data == key)
    {
        return tree;
    }
    if(tree->data < key)
    {
        return searchcode(tree->right,key);
    }
    return searchcode(tree->left,key);
}



void inorder(struct node *temp)
{
    if(temp == NULL)
    {
        return;
    }
    else
    {
        inorder(temp->left);
        printf("%d ",temp->data);
        inorder(temp->right);
    }
}

void preorder(struct node *temp)
{
    if(temp == NULL)
    {
        return;
    }
    else
    {
        printf("%d ",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}

void postorder(struct node *temp)
{
    if(temp == NULL)
    {
        return;
    }
    else
    {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d ",temp->data);
    }
}

void main()
{
    int choice;

    while(1)
    {
        printf("\n\n1. Create\n2. Search\n3. Inorder\n4. Preorder\n5. Postorder\n6. Exit\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nCreation : ");
                create();
                break;
            case 2:
                printf("\nSearch Operation : ");
                search();
                break;
            case 3:
                printf("\nInorder : ");
                inorder(tree);
                break;
            case 4:
                printf("\nPreorder : ");
                preorder(tree);
                break;
            case 5:
                printf("\nPostorder : ");
                postorder(tree);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid\n");
        }
    }
}
