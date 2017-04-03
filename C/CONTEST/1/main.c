#include<stdio.h>
int main()
{

    int A,B,C,D;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    if(A<0 || A>10000)
        return 1;
    else if(B<0 || B>10000)
        return 1;
    else if(C<0 || C>10000)
        return 1;
    else if(D<0 || D>10000)
        return 1;
    else;
        int ch1,ch2,ch3,sml;
        ch1=(A+B)-(C+D);
        ch2=(A+C)-(B+D);
        ch3=(A+D)-(B+C);
        if(ch1<ch2 && ch1<ch3 &&ch1>=0)
            sml=ch1;
        else if(ch2<ch1 && ch2<ch3 && ch2>=0)
            sml=ch2;
        else
            if(ch3>=0)
                sml=ch3;
        printf("%d\n",sml);


    return 0;
}
