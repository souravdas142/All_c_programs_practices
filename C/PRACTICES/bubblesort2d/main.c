#include<stdio.h>
int main()
{
    int ara[10][500];
    int row,col,j,k,p,sum=0,temp,l=0,m;
    printf("Enter how many subject + for total + roll : ");
    scanf("%d",&row);
    printf("\n Enter how many students : ");
    scanf("%d",&col);
    for(k=0;k<col;k++)
    {
        for(j=0;j<row;j++)
        {
            if(j==(row-1))
            {
                for(p=1;p<(row-1);p++)
                {
                    sum+=ara[p][k];
                }
            ara[row-1][k]=sum;
            sum=0;
            }
            else
                scanf("%d",&ara[j][k]);
        }
    }
    printf("\n\n");


    // print the array elements

    for(j=0;j<row;j++)
    {
        for(k=0;k<col;k++)
        {
            printf("%5d",ara[j][k]);
        }
        printf("\n");
    }
  for(k=0;k<col;k++)
  {
      for(m=k+1;m<col;m++)
      {
          if(ara[l][k]>ara[l][m])
          {
              temp=ara[l][k];
              ara[l][k]=ara[l][m];
              ara[l][m]=temp;
              do{
                temp=ara[++l][k];
                ara[l][k]=ara[l][m];
                ara[l][m]=temp;

              }while(l!=row);
              l=0;
          }
      }
  }
    printf("\n\n\n");
    for(j=0;j<row;j++)
    {
        for(k=0;k<col;k++)
        {
            printf("%5d",ara[j][k]);
        }
        printf("\n");
    }
    return 0;
}
