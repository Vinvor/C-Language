#include <stdio.h>
int main()
{
	int a,b,c,ab,ac; 
	printf("please enter 3 numbers:");
	scanf("%d,%d,%d",&a,&b,&c);
	ab=a+b;
	ac=a*c;
	printf("a+b+c=%d\n",ab+c);
	printf("a*b*c=%d\n",ac*b);
	return 0;
}