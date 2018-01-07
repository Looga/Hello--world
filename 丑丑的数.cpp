#include<stdio.h>
int main(){
	int n,m,i,j,x;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&m);
		
		for(j=1;j<=m;j++){
			x=j;
			while(x%2==0){
				x=x/2;
			}
			while(x%3==0){
				x=x/3;
			}
			while(x%5==0){
				x=x/5;
			}
			if(x==1)
			printf("%d ",j); 
		   }
	    
    }
    return 0;
} 
