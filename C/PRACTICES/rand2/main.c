#include<stdio.h>
#include<math.h>

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
    if(n<=1)
    return 1;


    return (cal(pow((n-1),2))+cal(pow((n-2),2)));



}
