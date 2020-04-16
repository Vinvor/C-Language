#include<stdio.h>
int main(){
	int a[3][4];
	for(int i=0;i<=2;i++){
		for(int j=0;j<=3;j++){
			a[i][j]=(i+1)*(j+1);
		}
	}
	for(int i=0;i<=2;i++){
		for(int j=0;j<=3;j++){
			printf("%2d ",a[i][j]);
		}
		if(i!=2)
			printf("\n");
	}
	return 0;
} 
