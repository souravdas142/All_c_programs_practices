#include<stdio.h>
#include<stdlib.h>
struct a
{
    int a;
    struct a *next;
};
struct a *abc=NULL;

void pr()
{
    abc=(struct a *)malloc(sizeof(struct a));
    scanf("%d",&abc->a);
    //int b=abc->a;
    //return b;
}
int main()
{
    pr();

    printf("%d",abc->a);
    return 0;
}
