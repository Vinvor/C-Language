#include<stdio.h>
int main()
{
	int a=3,b=3,c,d;
	c=(a++)+( a++)+( a++);
	d=(++b)+ (++b)+ (++b);
	printf("%d,%d, %d,%d\n",a,b,c,d);
	return 0;
}