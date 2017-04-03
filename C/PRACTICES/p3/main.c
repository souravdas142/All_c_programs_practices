#include<stdio.h>
int main()
{
    int a,sum=0;
    int *p=NULL;
    p=&a;
    printf("Enter your desire number for table : ");
    scanf("%d",p);
    for(int i=1;i<=10;i++)
    {
        sum+=*p;
        printf("\n \n %7d X %2d = %2d",*p,i,sum);
    }
    return 0;


}
