#include<stdio.h>
int main(){
	long long a,b=1;
	printf("������һ���Ǹ�������");
	scanf("%lld",&a);
	for(long long i=1;i<=a;i++){
		b=b*i;
	}
	printf("%lld�Ľ׳�Ϊ%lld",a,b);
	return 0;
}