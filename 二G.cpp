#include<stdio.h>
int main(){
	int a[555];
	int m,n,x;
	int i,j,k,s,r;
	scanf("%d %d",&m,&n);
	scanf("%d",&x);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	
	if(x==1){
		for(j=n;j<m;j++){
			printf("%d ",a[j]);
		}
		for(k=0;k<n;k++){
			printf("%d ",a[k]);
		}
	}
	if(x==0){
		for(s=(m-n);s<m;s++){
			printf("%d ",a[s]);
		}
		for(r=0;r<=n;r++){
			printf("%d ",a[r]);
		}
	}
	
	
	return 0;
}
