#include<stdio.h>
void flush();
int main()
{
    char input[1000];
    int i,j,no,in[1000],count=0;
    scanf("%d",&no);
    flush();
    for(i=0;i<no;++i)
    {
        for(j=0;;++j)
        {
           // input[j]=getchar();
            gets(input);
            if(input[j]=='\n')
                break;
            if(input[j]!=' ')
                count++;
        }
    if(count>10000000)
        break;
    in[i]=count;
    count=0;
    j=0;
   }
    for(i=0;i<no;++i)
    {
        printf("\n%d",in[i]);
    }

    return 0;
}
void flush()
{
    int flash;
    do
    {
        flash=getchar();
    }while(flash != '\n' && flash != EOF);
}
