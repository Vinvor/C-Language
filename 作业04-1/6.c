#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	a--;
	b=a/3;
	switch(b){
		case 0:printf("%d月在第1季度",a+1);break;
		case 1:printf("%d月在第2季度",a+1);break;
		case 2:printf("%d月在第3季度",a+1);break;
		case 3:printf("%d月在第4季度",a+1);break;
		default:printf("月份值错误！",a+1);
	}
	return 0;
}
