#include<stdio.h>
#include<string.h>
int main()
{
    int j,sum=0,summ=0,n;
    printf("\nEnter a Number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        for(j=1;j<=i;j++)
        {
            sum=sum+j*j;

        }
        summ+=sum;
        sum=0;
    }
    printf("%d",summ);
    return 0;
}
