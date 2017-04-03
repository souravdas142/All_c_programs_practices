#include<stdio.h>
#include<stdlib.h>
int main()
{

    // create an array to store 1 to 50 in decreasing order using heap memory

    int *p,i;
    p=(int *)malloc(50*sizeof(int));
    for(i=0;i<50;i++)
    {
        *(p+i)=50-i;
        printf("%d",*(p+i));
    }
    free(p);
    realloc(p);
    printf("%d",*p);
    return 0;
}
