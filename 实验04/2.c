#include<stdio.h>
int main(){
	int a[3][4]={{10,9,2,1},{12,1,11,3},{4,13,21,14}};//��ʼ����ά���� 
	int min=a[0][0],row=1,column=1;//��ʼ����Ҫ�õ��ı��� 
	for(int i=0;i<=2;i++){//��ÿ��Ԫ�ؽ��б��� 
		for(int j=0;j<=3;j++){
			if(a[i][j]<min){//������ָ�С��Ԫ�� 
				min=a[i][j],row=i,column=j;//��¼���Ԫ�ؼ����бꡢ�б� 
			}
		}
	}
	printf("min=%d, row=%d, column=%d.",min,row+1,column+1);//������ 
	return 0;
}
