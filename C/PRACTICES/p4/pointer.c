#include<stdio.h>
int main()
{
	char **ptr=NULL;
	char *p=NULL;
	char c='d';
	p=&c;
	ptr=&p;
	printf("\n c = %c",c);
	printf("\n c = %c",*p);
	printf("\n address of c = %p",(void *)p);
	printf("\n c = %c",**ptr);
	printf("\n address of c = %p",ptr);

	return 0;
}
