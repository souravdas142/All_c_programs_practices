#include<stdio.h>
int main()
{

    int i,j,k;
    for(i=0;i<6;i++)
    {

        for(j=0;j<6-i;j++)
        {
            printf(" ");
        }
        if(i>0){
        for(k=0;k<i;k++)
        {

                printf("* ");

        }
        }

        printf("\n");
    }




    return 0;
}
