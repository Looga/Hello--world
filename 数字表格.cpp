#include<stdio.h>
int a[199][50];
int r,c,i,j,n,k,x,y;

int SR(int x,int y){//交换两行 
	int temp;
	for(i=0;i<c;i++){
		temp=a[x][i];
		a[x][i]=a[y][i];
		a[y][i]=temp;
	}
	 
}
int SC(int x,int y){//交换两列 
	int temp;
	for(i=0;i<r;i++){
		temp=a[i][x];
		a[i][x]=a[i][y]; 
		a[i][y]=temp;
	}
}
int DR(int x){//删除行 
	for (i=x; i<=r-1; i++)
	{
		for (j=1; j<=c; j++)
		a[i][j]=a[i+1][j];
	}
}
int DC(int x){//删除列 
	for (i=1; i<=r; i++)
	{
		for (j=x; j<=c-1; j++)
		a[i][j]=a[i][j+1];
	}
}
int IR(int x){//x行上加一行0 
	for (i=c+1; i>=x; i--)
	{
		for (j=1; j<=c; j++)
		a[i][j]=a[i-1][j];
	}
	for (j=1; j<=c; j++) a[x][j]=0;
}
int IC(int x){//x列前加一列0 
	for (i=1; i<=r; i++)
	{
		for (j=c+1; j>=x; j--)
		a[i][j]=a[i][j-1];
	}
	for (i=1; i<=r; i++) a[i][x]=0;
}

int main(){
	char c1,c2;
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%c%c",&c1,&c2);
		if((c1=='S')&&(c2=='R')){
			scanf("%d%d",&x,&y);
			SR(x,y);
		}
		else if((c1=='S')&&(c2=='C')){
			scanf("%d%d",&x,&y);
			SC(x,y);
	    }
	    else if((c1=='D')&&(c2=='R')){
	    	scanf("%d",&x);
	    	DR(x);
	    	r=r+1;
	    }
	    else if((c1=='D')&&(c2=='C')){
	    	scanf("%d",&x);
	    	DC(x);
	    	c=c+1;
	    }
	    else if((c1=='I')&&(c2=='R')){
	    	scanf("%d",&x);
	    	IR(x);
	    	r=r-1;
	    }
	    else if((c1=='I')&&(c2=='C')){
	    	scanf("%d",&x);
	    	IC(x);
	    	c=c-1;
	    }
	}
	for (i=0; i<r; i++){
		for (j=0; j<c; j++){
		printf("%d ", a[i][j]);
		} 
		printf("\n");
	    }
	}
	

