#include<stdio.h>
int main()
{

    int a[10],i;
    int *p=NULL;
    p=a;
    for(i=0;i<10;i++)
        scanf("%d",p+i);
    for(i=0;i<10;i++)
        printf("\n %d",*(p+i));
    return 0;


}
