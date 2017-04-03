#include<stdio.h>
int main()
{

    int add[5][5]={{1,4,7,8,9},{2,6,8,9,7},{4,8,9,4,7},{7,5,3,4,6},{9,7,2,6,5}};
    int row,col,sum=0;
    printf("\n\n");
    for(row=0;row<5;++row)
    {
        for(col=0;col<5;++col)
        {
            printf("%4d",add[row][col]);

        }
        printf("\n\n");
    }
        printf("\n\n");
    for(row=0;row<5;++row)
    {
        for(col=0;col<5;++col)
        {

            sum+=add[row][col];
        }
        printf("Sumation of Row %d is : %d \n",row,sum);
        sum=0;
    }
    printf("\n\n");
    sum=0;
    for(col=0;col<5;++col)
    {
        for(row=0;row<5;++row)
        {
          sum+=add[row][col];
        }
        printf("Summation of Column %d is : %d\n",col,sum);
        sum=0;
    }

    return 0;
}
