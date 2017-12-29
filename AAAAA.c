#include<stdio.h>
int main(){
	int m,n,p,q,i,j,x,y,r,s,w,e;
	int sum=0;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	int a[m][n],b[p][q],c[m][q];
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
	if(n!=p)
	printf("error");

	if(n==p){
		for(r=0;r<m;r++){
			for(s=0;s<q;s++){

				for(w=0;w<n;w++){
					sum=sum+(a[r][w]*b[w][s]);
					}
					c[r][s]=sum;
					sum=0;
			}

		}
		  i=j=0;
	for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            printf("%d\n",c[i][j]);
        }
	}
	}

    return 0;
}
