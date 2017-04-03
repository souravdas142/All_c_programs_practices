#include<stdio.h>
int main()
{

    int n,i;
    scanf("%d",&n);
    printf("%d\n",n);
    for(i=100;i>0;i/=2)
    {
        printf("%d nota(s) de R$ %d,00\n",n/i,i);
        n=n%i;
        if(i==50)
            i-=10;
    }
    return 0;
}
