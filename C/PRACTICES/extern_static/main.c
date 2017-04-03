#include<stdio.h>
#include<stdlib.h>
void print()
{
    int a[50];
    for(int i=0;i<50;i++)
        a[i]=5*(i+1);
    for(int i=0;i<50;i++)
        printf("%d",a[i]);

}
int asf(int *ab,int *bc)
{
    int mn;
    mn=(*ab)*(*bc);
    return mn;
}
int *p(int *a,int *b)
{
    //int *c=(int *)malloc(sizeof(int));
    //int k,*c=&k;
    int c=(*a)+(*b);

    return &c;
}
int main()
{

    int a,b,kl;
    a=5;
    b=6;
    int *x=p(&a,&b);
    print();
    kl=asf(&a,&b);
    printf("\n%d %d",*x,kl);

}
