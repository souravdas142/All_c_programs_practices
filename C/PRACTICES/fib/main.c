#include<stdio.h>
//#include<math.h>

int cal(int n);

int main()
{
    int n,call;
    printf("Enter Upper Boundary : ");
    scanf("%d",&n);
    call=cal(n);
    printf("%d",call);
}
int cal(int n)
{
    if(cal(n<2))
        return n;
    //return cal(pow((n-1),2))+cal(pow((n-2),2));
    else
        return (cal(n-1)+cal(n-2))+1;

}
