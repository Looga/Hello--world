# include<stdio.h>
//以小数点后六位的小数为例分离整数部分和小数部分 
int main(){
	double x;
	int a,b;
	scanf("%lf",&x);
	a=x;
	b=(int)(x*1000000)%1000000;
	printf("整数部分为:%d\n小数部分为:%d\n",a,b);
	return 0; 
} 

