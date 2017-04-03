#include<stdio.h>
void mul(int n,int lim,int bound);
int main()
{
    int num,lim=1,bound=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    mul(num,lim,bound);
    return 0;
}

void mul(int num,int lim,int bound)
{
    if(lim!=11)
    {
        printf("\n%d  X %2d = %2d",bound,lim,bound*lim);
        lim++;
        if(lim>10)
        {
            lim=1;
            bound++;

        }
        if(bound!=num+1)
            mul(num,lim,bound);
    }
}
