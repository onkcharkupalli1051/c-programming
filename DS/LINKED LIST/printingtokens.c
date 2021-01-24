#include<stdio.h>

int main()
{
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]",s);
    s = realloc(s,strlen(s)+1);

}
