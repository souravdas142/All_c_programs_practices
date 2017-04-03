#include<stdio.h>
void strpalin(char str[]);
int main()
{

    char str[50];
    printf("Enter a string to check palindrom : ");
    while(1==scanf("%s",str))
    {

    }
    printf("\n");
    /*if(1==strpalin(str))
        printf("\n\n%s is palindrom",str);
    else
        printf("\n\n%s is not palndrom",str);
    */
    strpalin(str);
    return 0;
}
void strpalin(char str[])
{

    int i,j,q;
    for(i=0;str[i]!='\0';i++)
    {

    }
    printf("string length : %d",i);
    j=i-1;
    for(i=0;j>i;i++,j--)
       {
           if(str[j]==str[i])
                q=1;
            //printf("\n%s string is palindrom",str);
                //return 1;
            else
                q=0;
                //printf("\n%s string is not palindrom",str);
                //return 0;
       }
       if(q==1)
        printf("\n%s string is palindrom",str);
       else
        printf("\n%s string is not palindrom",str);

}
