#include<stdio.h>
int main()
{

    int a,b,*aa=NULL,*bb=NULL,**aaa=NULL,**bbb=NULL,***aaaa=NULL,***bbbb=NULL;
    aa=&a;
    bb=&b;
    aaa=&aa;
    bbb=&bb;
    aaaa=&aaa;
    bbbb=&bbb;
    scanf("%d%d",**aaaa,**bbbb);
    printf("entered %d %d ",***aaaa,***bbbb);
    ***aaaa=***aaaa + ***bbbb;
    ***bbbb=***aaaa-***bbbb;
    ***aaaa=***aaaa-***bbbb;
    printf("%d %d",***aaaa,***bbbb);

    return 0;

}
