#include<stdio.h>
int strcomp(char ar[], char ar2[]);
int strln(char ar[]);
int main()
{

    char ar[40],ar2[40];
    int length1,length2;
    printf("Enter a string for first aray : \n");
    while(1==scanf("%s",ar))
    printf("\n%s",ar);
    printf("Enter a string for 2nd aray : \n");
    while(1==scanf("%s",ar2))
    printf("\n%s",ar2);
    printf("\n");
    length1=strln(ar);
    length2=strln(ar2);
    printf("length1 : %d \n length2 : %d",length1,length2);
    printf("\n");


    if(1==strcomp(ar,ar2))
        {
            if(length1>length2)
                printf("%s is greater ",ar);
            else
                printf("%s is greater ",ar2);
        }
    else
         {
            if(length1>length2)
                printf("%s is greater ",ar);
            else
                printf("%s is greater ",ar2);
        }

    return 0;
}
int strln(char ar[])
{
    int i;
    for(i=0;ar[i]!='\0';i++)
    {

    }
   return i;
}
int strcomp(char ar[],char ar2[])
{
    int i;
    for(i=0;i<40;i++)
    {
        if(ar[i]>ar2[i])
        return 1;
        else
        return 0;
    }
}








