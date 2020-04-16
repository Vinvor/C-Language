#include<stdio.h>
int main(){
	int a,flag=0;
	scanf("%d",&a);
	for(int i=1;i*i*i<=a;i++){
		if(i*i*i==a){
			flag++;
			break;
		}
	}
	printf("%d%s完全立方数",a,flag?"是":"不是");
	return 0;
} 
