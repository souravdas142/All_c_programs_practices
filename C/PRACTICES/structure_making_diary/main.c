
#include<conio.h>
#include<stdio.h>
#include<string.h>


struct diary
{
    char name[50];
    char add[100];
    char phn[15];
    struct date
    {
        int day;
        int month;
        int year;

    }dte[3];
    char page[4][10][3];
};

int main()
{
    int i,j;

    struct diary users;
    printf("\n Enter User Name < Upto 50 characters > : ");
    fflush(stdin);
    gets(users.name);
    printf("\nEnter Address <Upto 100 characters > : ");
    fflush(stdin);
    gets(users.add);
    printf("\nEnter Your Phone Number < With Country Code eg. +91 for India > : ");
    fflush(stdin);
    gets(users.phn);

    // End of Intro of A User

    for(i=0;i<4;++i)
    {
        printf("\n\t\t\t\t  Day : ");
        scanf("%d",&users.dte[i].day);
        printf("Page No. : %d \t\t\tMonth : ",i+1);
        scanf("%d",&users.dte[i].month);
        printf("\t\t\t\t  Year : ");
        scanf("%d",&users.dte[i].year);
        printf("\n\n\n");
        fflush(stdin);
        for(j=0;j<4;++j)
        {
            scanf("%s",users.page[j][i]);


                printf("\n\n");

        }
        printf("\n\n\n");

    }


    // Now we Print the Diary


    printf("\n\n\nUser Name : %s",users.name);
    printf("\nAddress : %s",users.add);
    printf("\nPhone no. : %s",users.phn);
    printf("\n\n\n");

    for(i=0;i<3;++i)
    {
        printf("\n\t\t\t\t  Day : %d ",users.dte[i].day);

        printf("\nPage No. : %d \t\t\tMonth %d : ",i+1,users.dte[i].month);

        printf("\n\t\t\t\t  Year : %d",users.dte[i].year);

        printf("\n\n\n");
        for(j=0;j<4;++j)
        {


            printf("%s",users.page[j][i]);




        printf("\n");
        }
        printf("\n\n\n");

    }


  return 0;

}
