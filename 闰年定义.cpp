#include<stdio.h>
int main(){
    int a,c,y,m;      //a为年份 
	float b,x,n,q,w,e;      //b,c检测是否为00结尾 
	printf("请输入一个年份:\n");
	scanf("%d",&a);
	b=a/100.0;
	c=(int) b;
	q=b-c;
	//00结尾，判断是否能被400整除 
	if(q==0){
		n=a/400.0;
		m=(int) n;
		w=n-m;
		if(w==0)
		printf("这一年是闰年哟");
		else
		printf("这一年不是闰年"); 
	} 
	//非00结尾，判断能否被4整除 
	
	else
	{
		x=a/4.0;
		y=(int) x;
		e=x-y;
		if(e==0)
		printf("这一年是闰年哟");
		else
		printf("这一年不是闰年");
	} 
	return 0;
} 
