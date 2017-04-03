#include<stdio.h>
#include<math.h>
int main()
{

    //we are going calculate a number 'n' is prime or not
    // time complexity calculated

    long long int n=23,i,sq;
    //printf("Enter a number : ");
    //scanf("%d",&n);
    sq=sqrt(n);
    if(n==0 || n==1)
    {
        printf("\n This is not prime");
        return 0;
    }
    for(i=2;i<sq;i++)
    {
        if(n%i==0)
         {
             printf("\n %lld is not prime",n);
             return 0;
         }

    /*   else
          {
              printf("\n %lld is prime ",n);

          }
*/
    }
    printf("\n %lld is prime ",n);
    return 0;

}
