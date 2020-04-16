#include<stdio.h>
int sum=1;
void shjc(int a){
	sum*=a;
	if(a==2||a==1) return;
	else shjc(a-2);
}
int main(){
	int n;
	printf("请输入正整数：");
	scanf("%d",&n);
	shjc(n);
	printf("%d",sum);
    return 0;
}
