#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a); //读入整数a。 
	printf("%d%s被3和5整除",a,(a%3==0&&a%5==0)?"能":"不能"); //输出一个字符串，其中判定部分采用条件表达式。 
	return 0;
} 
