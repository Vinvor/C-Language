#include<stdio.h>
int main(){
	void min(int x,int y);
	int a,b;
	scanf("%d,%d",&a,&b);
	min(a,b);
	return 0;
}
void min(int x,int y){
	if(x<=y) y=x;
	printf("��С��������%d",y);
	return;
}