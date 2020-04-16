#include<stdio.h>
#include<string.h>
int main(){
	char a1[100],a2[100],c[201];//定义三个数组 
	scanf("%s%s",a1,a2); //读入两个数组 
	strcpy(c,a1); //把前一部分存入c 
	strcat(c,a2); //后一部分连接 
	printf("%s\n%s\n%s",a1,a2,c);//输出结果 
	return 0;
}
