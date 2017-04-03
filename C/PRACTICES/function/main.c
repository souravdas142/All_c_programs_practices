#include<stdio.h>
void add(double x,double y);

int main()
{
    double a,b;
    printf("Enter a number : ");
    scanf("%lf%lf",&a,&b);
    add(a,b);

    return 0;
}
void add(double e,double f)
{
    double c;
    c=e+f;
    printf("%lf",c);
    return;
}
