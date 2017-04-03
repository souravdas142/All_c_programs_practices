#include<stdio.h>
int main()
{
    int a,b,c,d;
    double x,y,z;
    scanf("%d%d%lf",&a,&b,&x);

    scanf("%d%d%lf",&c,&d,&y);
    z=(b*x)+(d*y);
    printf("VALOR A PAGAR: R$ %.2lf\n",z);
    return 0;
}
/*/#include<stdio.h>
int main()
{
    int a,b,x,y;
    double m,n,result;
    scanf("%d%d%lf",&a,&b,&m);
    scanf("%d%d%lf",&x,&y,&n);
    result=(double)b*m+(double)y*n;
    printf("VALOR A PAGAR: R$ %.2lf\n",result);
    return 0;
}*/
