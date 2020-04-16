#include<stdio.h>
int main(){
	int a;
	printf("************Time************\n1 morning\n2 afternoon\n3 night\nPlease enter your choice:");
	scanf("%d",&a);
	switch(a){
		case 1:{
			printf("Good Morning!");
			break;
		}
		case 2:{
			printf("Good Afternoon!");
			break;
		}
		case 3:{
			printf("Good Night!");
			break;
		}
		default:{
			printf("Selection Error!");
			break;
		}
	}
	return 0;
} 
