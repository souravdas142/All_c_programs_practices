#include<stdio.h>
int main()
{
    int a=10,i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<(i+1);j++)
            printf(" *");
        printf("\n");
    }
}
