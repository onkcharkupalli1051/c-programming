#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node *left,*right;
};

struct node *root = NULL;

struct node *insert(struct node* x,int val)
{
    if(x == NULL)
    {
        x = (struct node*)malloc(sizeof(struct node));
        x->data = val;
        x->left = NULL;
        x->right = NULL;
        return x;
    }
    else if(val < x->data)
    {
        x->left = insert(x->right,val);
        return x;
    }
    else
    {
        x->right = insert(x->right,val);
        return x;
    }
};

void inorder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        preorder(root->left);
        preorder(root->right);
        printf("%d ",root->data);
    }
}

int search(struct node *x,int val)
{
    if(x == NULL)
    {
        return 0;
    }
    else if(val == x->data)
    {
        return 1;
    }
    else if(val < x->data)
    {
        search(x->left,val);
    }
    else
    {
        search(x->right,val);
    }
    return 0;
}
int main()
{
    int choice,val;

    while(1)
    {
        printf("\nOperations :\n1. Insert\n2. Inorder Traversal\n3. Preorder Traversal\n4. Postorder Traversal\n5. Search\n6. Exit\nEnter choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("\nEnter data to insert : ");
            scanf("%d",&val);
            root = insert(root,val);
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            printf("\nEnter data to search : ");
            scanf("%d",&val);
            int item = search(root,val);
            if(item == 1)
            {
                printf("\nElement %d found in BS Tree",val);
            }
            else
            {
                print("Element %d not found.",val);
            }
            break;
        case 6:
            exit(0);
        default:
            printf("\nInvalid! Try again");
        }
    }
}
