#include<stdio.h>
int main(){
	int a[3][4]={{10,9,2,1},{12,1,11,3},{4,13,21,14}};//初始化二维数组 
	int min=a[0][0],row=1,column=1;//初始化需要用到的变量 
	for(int i=0;i<=2;i++){//对每个元素进行遍历 
		for(int j=0;j<=3;j++){
			if(a[i][j]<min){//如果发现更小的元素 
				min=a[i][j],row=i,column=j;//记录这个元素及其行标、列标 
			}
		}
	}
	printf("min=%d, row=%d, column=%d.",min,row+1,column+1);//输出结果 
	return 0;
}
