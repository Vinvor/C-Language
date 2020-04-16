#include<stdio.h>
int main(){
	long long a,b=1;
	printf("请输入一个非负整数：");
	scanf("%lld",&a);
	for(long long i=1;i<=a;i++){
		b=b*i;
	}
	printf("%lld的阶乘为%lld",a,b);
	return 0;
}