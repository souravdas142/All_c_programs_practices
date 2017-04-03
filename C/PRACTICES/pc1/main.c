#include <stdio.h>
int main()
{
    char *p[3]={"hlo","how","are"};
    int i;
    for(i=0;i<3;i++)
    {
       printf("%c",*p[i]);
       printf("\n");
    }

    return 0;
}
