#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	if(a>'9'||a<'0'){
		printf("%c��������",a);
	}
	else{
		printf("%c������",a);
	} 
	return 0;
}
