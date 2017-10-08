#include<stdio.h>
main()
{
	//ax+by=m
	//cx+dy=n
	//x=(md-bn)/(ad-bc)
	//y=(mc-an)/(bc-ad)
	double a,b,c,d,m,n,x,y;
	printf("请输入X Y前面的系数以及M N的值\n");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m,&n);
	x=(m*d-b*n)/(a*d-b*c);
	y=(m*c-a*n)/(b*c-a*d);
	printf("X值为%lf，Y值为%lf\n",x,y);
}
