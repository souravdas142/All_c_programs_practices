#include<stdio.h>
int main()
{

    int Mat_A[50][50],Mat_B[50][50],Mat_c[50][50];
    int row1,col1,row2,col2,i,j,k;
    printf("Enter first row and col : ");
    scanf("%d%d",&row1,&col1);
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
            scanf("%d",&Mat_A[i][j]);
    }
    printf("\n\nEnter second row and col : ");
    scanf("%d%d",&row2,&col2);
    if(col1!=row1)
    {
        printf("Can't Perform Multiplication\n\n");
        return 1;
    }
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
            scanf("%d",&Mat_B[i][j]);
    }
    printf("\n\n The matrix multiplication is : \n\n");
    for(i=0;i<row1;i++)
    {
        for(k=0;k<col2;k++)
        {
            for(j=0;j<col1;j++)
                Mat_c[i][k]+=Mat_A[i][j]*Mat_B[j][k];

        }
    }


    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
            printf("%4d",Mat_c[i][j]);
        printf("\n");
    }
    return 0;
}
