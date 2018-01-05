#include<stdio.h>
int abc(int n){
	if(n==1){
	    return 1;
	}
	else{
		return n*abc(n-1);
	}
} 
int main(){
	int n,m;
	scanf("%d",&n);
	m=abc(n);
	printf("%d",m);
	return 0;
}
