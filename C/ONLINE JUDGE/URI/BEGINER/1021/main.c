#include<stdio.h>
int main()
{

    int rupee,i;
    double money,dob=100.0,paisa;
    scanf("%lf",&money);
    rupee=(int)money;
    //paisa=(int)((double)(money-rupee)*100);
    paisa=money-rupee;
    if(((int)money)%2!=0 && ((int)money)%5!=0 )
        paisa+=100;
    printf("NOTAS:\n");
    for(i=100; ;i/=2)
    {
        if(i>1){
            printf("%d nota(s) de R$ %d.00\n",rupee/i,i);
            rupee%=i;
            if(i==50)
                i-=10;
            if(i==25)
                i-=5;
        }
        else{
            printf("%d MOEDA(s) de %0.2lf\n",(int)(paisa/dob),dob);
            paisa=paisa-(paisa/dob);
            dob/=2;
            if(dob==0)
                break;
        }

        //if(i<2)
    }


    printf("%lf",0.50/0.25);

   /* printf("MOEDAS\n");
    for(i=100;i>0;i/=2)
    {
        if(i=)
        printf("%d moeda(s) de R$ %d\n",i,paisa/i);
        paisa%=i;
        if(i==25)
            i-=5;
        if(i==5)
            i-=4;
    }*/
    return 0;
}
