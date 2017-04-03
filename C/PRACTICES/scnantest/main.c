#include<stdio.h>
int charlen(char a[]);
int main()
{

    int len;
    char ch[50];

     while(1==scanf("%s",ch));
     len=charlen(ch);
    printf("%s",ch);
    printf("\n%d",len);
    return 0;
}
int charlen(char ch[])
{
    int i;
    for(i=0;ch[i]!='\0';i++)
    {

    }

    return i;
}
