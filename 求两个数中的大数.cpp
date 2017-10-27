#include<stdio.h>
double x,y;
int main (){
	printf("Please input x:");
	scanf("%lf",&x);
	printf("Please input y;");
	scanf("%lf",&y);
	if(x<y){
		printf("更大的数是%lf",y);
	}
	else{
		if(x=y){
			printf("两数相等");
		}
		else{
			printf("更大的数是%lf",x);
		}
	}
	return 0;
} 
