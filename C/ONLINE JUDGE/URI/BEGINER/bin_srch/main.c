// Binary search on array with time complexity O(logn)

#include<stdio.h>
#define SIZE 4
int main()
{
    int rand[SIZE],i,mid,st=0,end=SIZE-1,fnd,flag=0;
    for(i=0;i<SIZE;i++)
        scanf("%d",&rand[i]);
    printf("\n Input finished..... \n\n Enter which number you want to search : ");
    scanf("%d",&fnd);
    mid=(int)(st+end)/2;
    while(1)
    {
        if(rand[mid]==fnd)
        {
            printf("\nNumber find at Position %d \n\n",mid+1);
            flag=1;
            break;
        }
        else if(fnd>rand[mid])
        {
            st=mid+1;
            if(st>(SIZE-1))
                break;
            mid=(int)(st+end)/2;
            printf("\ncase1\n");
        }
        else
        {
            end=mid-1;
            if(end<0)
                break;
            mid=(int)(st+end)/2;
            printf("\ncase2\n");
        }


    }
    if(flag==0)
        printf("The Number is not exitst on list :( \n\n");
    return 0;
}
