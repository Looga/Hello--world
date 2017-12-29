#include<stdio.h>
int main(){
	int m,n,p,q,i,j,x,y;
	int sum=0;
	int a[555][555],b[555][555],c[555][555];
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&p);
	scanf("%d",&q);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(x=0;x<p;x++){
		for(y=0;y<q;y++){
			scanf("%d",&b[x][y]);
		}
	}
	printf("error");
	return 0;
}

