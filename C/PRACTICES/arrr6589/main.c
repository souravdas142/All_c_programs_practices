#include<stdio.h>
void odev(int a[10][10]);
int main()
{
    int tbl[10][10],i,j;
    for(i=0;i<10;++i)
    {
        for(j=0;j<10;++j)
        {
            tbl[i][j]=(i+1)*(j+1);
            printf("%4d X %d =%3d",(i+1),(j+1),tbl[i][j]);
        }
         printf("\n");
    }
    printf("\n \n \n");
    odev(tbl);
    return 0;
}

void odev(int a[10][10])
{
    int i,j,count_ev=0,count_od=0,sum=0;
    for(i=0;i<10;++i)
    {
        for(j=0;j<10;++j)
        {
            if(a[i][j]%2==0)
                ++count_ev;
            if(a[i][j]%2!=0)
                ++count_od;
            sum+=a[i][j];
        }
    }
    printf("Number of Even number : %d \t\t Number of Odd number : %d\
            \n\n \t\t\t Sum of Elements : %d\n\n",count_ev,count_od,sum);
}
