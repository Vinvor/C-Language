#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	a--;
	b=a/3;
	switch(b){
		case 0:printf("%d���ڵ�1����",a+1);break;
		case 1:printf("%d���ڵ�2����",a+1);break;
		case 2:printf("%d���ڵ�3����",a+1);break;
		case 3:printf("%d���ڵ�4����",a+1);break;
		default:printf("�·�ֵ����",a+1);
	}
	return 0;
}
