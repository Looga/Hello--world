#include<stdio.h>
int main (){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(a<=b){
		if(c<=a)
		printf("%f %f %f",c,a,b);
		if(a<=c&&c<=b)
		printf("%f %f %f",a,c,b);
		if(b<=c)
		printf("%f %f %f",a,b,c);
	}
	else{
	    if(c<=b)
		printf("%f %f %f",c,b,a);
		if(b<=c&&c<=a)
		printf("%f %f %f",b,c,a);
		if(a<=c)
		printf("%f %f %f",b,a,c);
		
	}
	return 0;
}
