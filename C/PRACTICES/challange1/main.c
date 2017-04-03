#include<stdio.h>
void buff();
int main()
{

    int input[5000],i=0,in,pos,neg;
    pos=neg=0;
    scanf("%d",&in);
    buff();
    while(i!=in)
    {
        scanf("%d",&input[i]);
        ++i;
    }
    buff();
    i=0;
    while(i!=in)
    {
        if(input[i]>=0)
            ++pos;
        else
            ++neg;
        ++i;
    }
    printf("\n%d %d",pos,neg);
    return 0;
}

void buff()
{
    int flash;
    do
    {
       flash=getchar();
    }while(flash!='\n' && flash!=EOF);

}

