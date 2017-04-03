#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *num=NULL;
    num=fopen("NUMBER.txt","w");
    while(scanf("%d",&n)!=EOF)
    {
        fprintf(num,"%d",n)
    }
    fclose(num);
}
