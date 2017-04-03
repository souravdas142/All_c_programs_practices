#include <stdio.h>


int main()
{
char *p[5]={"hello","sourav","das"};
int i=0,sum=0;
//while(i!=3)
//{
    sum+=sizeof(p);
//    i++;
//}
printf("\n size of p to c array is : %d",sum);
return 0;
}
