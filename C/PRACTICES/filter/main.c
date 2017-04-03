#include<stdio.h>
int main()
{
    // Terminate the program immideately when string is null;
    char ar[200];
    while(scanf("%[^\n]%*c",ar)!=0)
        printf("%s\n",ar);
    return 0;
}
