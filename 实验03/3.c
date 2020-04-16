#include<stdio.h>
int main(){
	int flag=0,a=0; 
	while(flag!=10){
		 if(a%3==2&&a%5==4&&a%7==3){
		 	printf("%d ",a);
		 	flag++;
		 }
		 a++;
	}
	return 0; 
}
