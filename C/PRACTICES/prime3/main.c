//if you don't understand add a flag "-g"(option) with gcc and run with break and watchpoints
//This is not sufficient
/*
so the time complexity for inner loop n/2
and the time complexity for outer loop is n
so the total time complexity is n*(n/2)
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int up_bound=0,low_bound=0,i,j,sq=0,flag;
    printf("Enter lower bound : ");
    scanf("%d",&low_bound);
    if(low_bound<0)
        return 1;
    printf("Enter upper bound : ");
    scanf("%d",&up_bound);
    for(i=low_bound;i<=up_bound;i++)
    {
		sq=(int)sqrt(i);
		if(i==2 || i==3){
			flag=1;
		}
		else if(i%2==0)
			continue;
		else if(sq<3)
		{
			if(i%3!=0)
				flag=1;
		}
	else
	{
        flag=0;
        for(j=3;j<=sq;j=j+2)
        {
            if(i%j==0)
			{
				flag=0;
                break;
			}
			else flag=1;
        }
	}
        if(flag==1)
            printf("%d\n",i);
    }
    return 0;
}
