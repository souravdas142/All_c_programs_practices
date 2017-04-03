#include<stdio.h>
#include<string.h>
int main()
{

    // include all country belong to shark country

    char saarc[7][100]={"India","Pakistan","Bangladesh","Nepal",\
                            "Bhutan","Srilanka","Maldives"};
    printf("\n\n");
    int row,col,length;
    for(row=0;row<7;++row)
        printf("%-3]s\n",saarc[row]);
    printf("\n\n");
    for(row=0;row<7;row++)
    {
        length=strlen(saarc[row]);
        for(col=0;col<length;col++)
        {
            printf("saarc[%d][%d] = %c ",row,col,saarc[row][col]);
        }
        printf("\n");
    }

    return 0;

}
