#include<stdio.h>
int fib(int n);
int main()
{
    int n=5,fibb;
    printf("Enter a number upto find fibnocci number : %d",n);
    //scanf("%d",&n);
    fibb=fib(n);
    printf("\nThe fibnocci number of %d is %d \n",n,fibb);
    return 0;
}

// USING RECURSION FUNCTION


int fib(int n)
{

    if(n<2)
        return n;
    else
        return (fib(n-1)+fib(n-2));
}


// USING LOOP


/*int fib(int n)
{

    int f1=0,f2=1,i,sum=0;
    for(i=0;i<n;i++)
    {
        if(n<=1)
            sum=i;
        else{
            sum=f1+f2;
            f2=f1;
            f1=sum;
        }
    }
    return f1;
}
*/
