# include<stdio.h>
//��С�������λ��С��Ϊ�������������ֺ�С������ 
int main(){
	double x;
	int a,b;
	scanf("%lf",&x);
	a=x;
	b=(int)(x*1000000)%1000000;
	printf("��������Ϊ:%d\nС������Ϊ:%d\n",a,b);
	return 0; 
} 

