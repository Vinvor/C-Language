#include<stdio.h>
#include<string.h>
int main(){
	char a1[100],a2[100],c[201];//������������ 
	scanf("%s%s",a1,a2); //������������ 
	strcpy(c,a1); //��ǰһ���ִ���c 
	strcat(c,a2); //��һ�������� 
	printf("%s\n%s\n%s",a1,a2,c);//������ 
	return 0;
}
