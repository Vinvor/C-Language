#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	printf("%c%s����",a,((a>'9'||a<'0')?"����":"��")); 
	return 0;
}
