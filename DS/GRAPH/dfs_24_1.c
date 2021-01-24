#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX 5

struct vertex
{
    char label;
    bool visited;
};

//stack variables
int stack[MAX];
int top = -1;

//graph variables

//array of vertices
struct vertex* vertices1[MAX];

//adjacency matrix
int adjMatrix[MAX][MAX];

int vertexcount = 0;

//stack functions
void push(int item)
{
    stack[++top] = item;
}

int pop()
{
    return stack[top--];
}

int peek()
{
    return stack[top];
}

bool isempty()
{
    return top == -1;
}

//********** graph functions ******************

//add vertex to the vertex list
void addvertex(char label)
{
    struct vertex* vertex = (struct vertex*)malloc(sizeof(struct vertex));
    vertex->label = label;
    vertex->visited = false;
    vertices1[vertexcount++] = vertex;
}

//add edge to edge array
void addedge(int start,int end)
{
    adjMatrix[start][end] = 1;
    adjMatrix[end][start] = 1;
}

//display the vertex
void displayvertex(int vertexindex)
{
    printf("%c ",vertices1[vertexindex]->label);
}

//get the adjacent unvisited vertex
int getAdjUnvisitedVertex(int vertexindex)
{
    int i;

    for(i=0; i<vertexcount; i++)
    {
        if(adjMatrix[vertexindex][i] == 1 && vertices1[i]->visited == false)
        {
            return i;
        }
    }
    return -1;
}

void depthfirstsearch()
{
    int i;

    //mark first node as visited
    vertices1[0]->visited = true;

    displayvertex(0);

    push(0);

    while(!isempty())
    {

        //get the unvisited vertex of vertex which is at top of the stack
        int unvisitedvertex = getAdjUnvisitedVertex(peek());

        //no adjacent vertex found
        if(unvisitedvertex == -1)
        {
            pop();
        }
        else
        {
            vertices1[unvisitedvertex]->visited = true;
        displayvertex(unvisitedvertex);
            push(unvisitedvertex);
        }
    }

    for(i=0; i<vertexcount; i++)
    {
        vertices1[i]->visited = false;
    }
}

int main()
{
    int i,j;

    for(i=0; i<MAX; i++)
    {
        for(j=0; j<MAX; j++)
        {
            adjMatrix[i][j] = 0;
        }
    }

    addvertex('S');
    addvertex('A');
    addvertex('B');
    addvertex('C');
    addvertex('D');

    addedge(0,1);
    addedge(0,2);
    addedge(0,3);
    addedge(1,4);
    addedge(2,4);
    addedge(3,4);

    printf("\nDepth First Search : ");
    depthfirstsearch();

    return 0;
}

