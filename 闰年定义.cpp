#include<stdio.h>
int main(){
    int a,c,y,m;      //aΪ��� 
	float b,x,n,q,w,e;      //b,c����Ƿ�Ϊ00��β 
	printf("������һ�����:\n");
	scanf("%d",&a);
	b=a/100.0;
	c=(int) b;
	q=b-c;
	//00��β���ж��Ƿ��ܱ�400���� 
	if(q==0){
		n=a/400.0;
		m=(int) n;
		w=n-m;
		if(w==0)
		printf("��һ��������Ӵ");
		else
		printf("��һ�겻������"); 
	} 
	//��00��β���ж��ܷ�4���� 
	
	else
	{
		x=a/4.0;
		y=(int) x;
		e=x-y;
		if(e==0)
		printf("��һ��������Ӵ");
		else
		printf("��һ�겻������");
	} 
	return 0;
} 
