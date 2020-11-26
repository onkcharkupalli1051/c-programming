#include<stdio.h>
#include<conio.h>

struct book
{
    char name[10];
    int pages;
};


void main()
{
    struct book b1 = {"Ass",10};
    struct book *p;
    p = &b1;
    printf("\n %s %d ",b1.name,b1.pages);
    printf("\n\n %s %d ",(*p).name,(*p).pages);
    printf("\n %s %d ",p->name,p->pages);
    return 0;
}
