#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	if(a>'9'||a<'0'){
		printf("%c不是数字",a);
	}
	else{
		printf("%c是数字",a);
	} 
	return 0;
}
