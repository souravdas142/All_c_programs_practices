#include<stdio.h>
#include<math.h>
int main()
{

    printf("Enter a  Lower boundary : ");
    int bound,low,j,sq,flag;
    scanf("%d",&low);
    printf("Enter a  Lower boundary : ");
    scanf("%d",&bound);
    if(bound<=2){
        printf("not possible");
        return 1;
    }

    for(int i=low;i<=bound;i++)
    {
        flag=0;
        sq=(int)sqrt(i);
            if(i>2 && i%2==0)
                continue;
            for(j=3;j<=sq;j+=2)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
                else
                    flag=1;
            }
            if(i==3 || i==2)
                flag=1;
            if(flag==1)
                printf("\n%d",i);

    }
    return 0;
}
