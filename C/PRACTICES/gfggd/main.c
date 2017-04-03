#include<stdio.h>

int main()
{
	int a,i,j,dev,ar[50];
	printf("Enter a decimal number : ");
	scanf("%d",&a);
	printf("\n\n");
    dev=a/2;
	for(i=0;i>=0;i++)
	{

		ar[i]=a%2;
		if(dev==0)
            break;
		a=dev;
		dev=a/2;
	}
	for(i=i;i>=0;i--)
        printf("%d",ar[i]);
	return 0;
}

/*void mine(int a)
{
	int


	/*
	j=i;
	for(i=0,j=j;i<=j;i++,j--)
	{
	    if(i==j)
            break;
		temp=ar[i];
		ar[i]=ar[j];
		ar[j]=temp;
	}
	j=i;

	for(j=i;j>=0;j--)
		printf("%d",ar[j]);

printf("%d",i);
	}
	*/

