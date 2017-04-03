#include<stdio.h>
int main()
{
    char name[50];
    double salary,sales,TOTAL;
    scanf("%s",name);
    scanf("%7lf",&salary);
    fflush(stdin);
    scanf("%7lf",&sales);
    TOTAL=salary+(sales*0.15);
    printf("TOTAL = R$ %0.2lf\n",TOTAL);
    return 0;
}
