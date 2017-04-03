#include <stdio.h>
int main()
{
    int v=4,*p;

    p=&v;
    int **pp=&p;
    printf(" %p ",p);
    printf("\n %p ",&v);
    printf(" \n %p",pp);
    return 0;
}
