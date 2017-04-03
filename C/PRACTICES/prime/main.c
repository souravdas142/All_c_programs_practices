#include<stdio.h>
int main()
{
    int ara1[50][50],ara2[50][50],ans[50][50];
    int r1,c1,r2,c2,i,j;
    printf("boundary gor first element : ");
    scanf("%d%d",&r1,&c1);
    for(i=0;i<r1;i++)
    {
         for(j=0;j<c1;j++)
         {
             scanf("%d",&ara1[i][j]);
         }
    }
    printf("Enter second boundary : ");
    scanf("%d%d",&r2,&c2);
    if(r1!=c2)
    {
        printf("can't possible");
        return 1;
    }
    for(i=0;i<r2;i++)
    {

        for(j=0;j<c2;j++)
        {
            scanf("%d",&ara2[i][j]);
        }
    }
    int sum=0,k;
    for(i=0;j<r1;i++)
    {
        for(k=0;k<c2;k++)
        {
            for(j=0;j<c2;j++)
            {

                    sum=sum+ara1[i][j]*ara2[j][i];
            }
            ans[i][k]=sum;
            sum=0;
        }

    }
    for(i=0;i<r1;i++)
    {

        for(j=0;j<c2;j++)
        {
            printf("%4d",ans[i][j]);
        }
        printf("\n");
    }




}
