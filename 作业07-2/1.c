#include<stdio.h>
void inn(){
	printf("���Ǳ�Ƕ�׵��õĺ���\n");
} 
void outt(){
	inn();
	printf("Ƕ�׵������");
} 
int main(){
	outt();
    return 0;
}
