#include<stdio.h>
int main()
{

    int hour,ave;
    double cal;
    scanf("%d%d",&hour,&ave);
    cal=(ave*hour)/12.0;
    printf("%0.3lf\n",cal);
    return 0;
}
