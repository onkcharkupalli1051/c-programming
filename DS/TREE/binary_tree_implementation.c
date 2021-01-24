/*
Creation of binary tree,
Inorder, postorder doesn't work
preorder works.

*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *temp;

int create()
{
    int x;
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data (-1 for no node) : ");
    scanf("%d",&x);

    if(x == -1)
    {
        return 0;
    }
    newnode->data = x;

    printf("\nEnter left child of %d : ",x);
    newnode->left = create();

    printf("\nEnter right child of %d : ",x);
    newnode->right = create();
    return newnode;
}


//inorder traversal : left root right
void inorder(struct node *root)
{
    if(root = 0 || root == -1)
    {
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

//pre-order traversal : root left right
void preorder(struct node *root)
{
    if(root == 0)
    {
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

//post-order traversal : left right root
void postorder(struct node *root)
{
    if(root == 0)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}

void main()
{
    struct node *root = 0;
    root = create();


    printf("\nPre-order is : ");
    preorder(root);

    printf("\nIn-order is : ");
    inorder(root);

    printf("\nPostorder is : ");
    postorder(root);
}

