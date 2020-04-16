#include<stdio.h>
void inn(){
	printf("这是被嵌套调用的函数\n");
} 
void outt(){
	inn();
	printf("嵌套调用完毕");
} 
int main(){
	outt();
    return 0;
}
