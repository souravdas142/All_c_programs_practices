#include<stdio.h>
int main()
{
    int i,k,a[20],*p=NULL;
    p=a;
    printf("How much elements? : ");
    scanf("%d",&k);
    printf("\n Enter elements of the aray : ");
    for(i=0;i<k;i++)
        scanf("%d",(p+i));
    printf("Entered array elements : ");
    for(i=0;i<k;i++)
        printf("%5d",*(p+i));
    return 0;
}
