#include<stdio.h>
double x,y;
int main (){
	printf("Please input x:");
	scanf("%lf",&x);
	printf("Please input y;");
	scanf("%lf",&y);
	if(x<y){
		printf("���������%lf",y);
	}
	else{
		if(x=y){
			printf("�������");
		}
		else{
			printf("���������%lf",x);
		}
	}
	return 0;
} 
