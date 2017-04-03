
#include <stdio.h>

int main()
{

    float x=5.2;
    int long a;
    a=*(int *)&x;
    printf("%ld",a);

    return 0;
}
