#include<stdio.h>
#include<math.h>
float a,b;
int main (){
	scanf("%f",&a);
	scanf("%f",&b);
	if(fabs(a-b)<=1e-6){
		printf("a等于b");
	    return 0;
    } 
	else{
	    printf("a不等于b");
		return 0;
	}
		
	
} 
