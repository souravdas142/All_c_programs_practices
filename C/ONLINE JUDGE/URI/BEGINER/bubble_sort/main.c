#include<stdio.h>
#define up 4
int main()
{
    int a[up],i,j,flag,temp;
    for(i=0;i<up;i++)
        scanf("%d",&a[i]);
    printf("\n\nEnd of Input\n\n");
    for(i=0;i<up-1;i++)
    {
        flag=0;
        for(j=0;j<up;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    printf("\n\n");
    for(i=0;i<up;i++)
        printf("\t%d",a[i]);
    printf("\n\n");
    return 0;
}
