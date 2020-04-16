#include<stdio.h>
void plus(int a[],int length){
	for(int i=0;i<=length-1;i++){
		a[i]++;
		printf("%d ",a[i]);
	}
}
int main(){
	int a[10]={3142,12412,3214,21,3124,124,12,4,53,1252453};
	plus(a,10);
    return 0;
}
