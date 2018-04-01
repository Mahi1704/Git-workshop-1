#include<stdio.h>
int add()
{
	return 2+3;
}
int main(void)
{
	int a=40;
	int b=20;
	int d=add();
	printf("%d\n%d\n",a+b,d);
	printf("changed");
}
