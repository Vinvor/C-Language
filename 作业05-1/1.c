#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int i=1;
	for(;i<=a;i++){
		if(a%i==0){
			printf("%d ",i); 
		}
	}
	return 0;
} 
