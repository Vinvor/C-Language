#include<stdio.h>
int main(){
	double a=0;
	int i1;
	scanf("%d",&i1);
	for(int i2=1;i2<=i1;i2++){
		double x;
		if(i2%2==0){
			x=-1;
		}
		else{
			x=1;
		}
		a=a+x/i2;
	}
	printf("%f",a);
	return 0;
}