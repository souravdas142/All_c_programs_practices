#include<stdio.h>
int main()
{
    int distance,compare;
    scanf("%d",&distance);
    compare=(distance*60)/(60-30);
    printf("%d minutos\n",compare);
    return 0;
}
