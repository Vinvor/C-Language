#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	printf("%c%s数字",a,((a>'9'||a<'0')?"不是":"是")); 
	return 0;
}
