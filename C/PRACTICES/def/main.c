#include<stdio.h>
int main()
{
    int i,j,k;
    i=5;
    i++;
    printf("\n i = %d",i);
    j=i++;
    printf("\n i2 = %d",i);
    k=++i;
    printf("\n j = %d \n k = %d \n i3 = %d",j,k,i);
    return 0;
}
