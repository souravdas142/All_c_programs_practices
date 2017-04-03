#include<stdio.h>
int main()
{
    double n;
    scanf("%5lf",&n);
    double k;
    k=n%(int)n;
    n=n-k;
    printf("%lf \n %lf",k,n);
    return 0;
}
