#include<stdio.h>
int main(){
	int a[3]={9,8,7};
	for(int i=2;i>=0;i--){
		printf("%d",a[i]);
		if(i) printf(" ");
	}
	return 0;
} 
