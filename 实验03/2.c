#include<stdio.h>
int main(){
	int sum=0,flag=1,a=1;
	for(int i=1000;i>=2,flag<=10;i--){
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				a=0;
				break;
			}
		}
		if(a){
			sum+=i;
			printf("%d ",i);
			flag++;
		}
		a=1;
	}
	printf("\nºÍÎª%d",sum);
	return 0; 
}
