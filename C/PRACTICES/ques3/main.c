#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p=NULL,siz,i;
    printf("how many ? ");
    scanf("%d",&siz);
    p=(int *)malloc(siz*sizeof(int));
    if(!p)
        printf("\a\nMemmory allocate unsuccessful");
    for(i=0;i<siz;i++)
    {
        p[i]=(siz*i)+1;
        printf("\nNumber : %d",p[i]);

    }
    printf("\nDo you want to Increase it by 1 ?");
    char chk;
    fflush(stdin);
    scanf("%c",&chk);
    if(chk=='y' || chk=='Y')
    {
        p=(int *)realloc(p,1+(siz*sizeof(int)));
        scanf("%d",&p[i]);
    }
    for(int j=0;j<=i;j++)
        printf("\n%d",p[j]);
    free(p);

    return 0;
}
