#include<stdio.h>
#include<math.h>
int main()
{
	double pi=3.14159;
	double R,VOLUME;
    scanf("%lf",&R);
    VOLUME=(4.0/3.0)*pi*pow(R,3);
	printf("VOLUME = %0.3lf\n",VOLUME);
	return 0;
}
