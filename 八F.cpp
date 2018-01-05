#include<stdio.h>
struct score{
	int Mat;
	int Eng;
	int Phy;
};
int main(){
	int n,sum;
	int i=0,j,y;
	scanf("%d",&n);
	struct score aa;
	int s[n];
	
	for(j=0;j<n;j++){
		scanf("%d%d%d",&aa.Mat,&aa.Eng,&aa.Phy);
	    sum=(aa.Mat)+(aa.Eng)+(aa.Phy);
		s[j]=sum;
	}
	int max=s[0];
	for(y=0;y<(n-1);y++){
		if(s[y+1]>max)
		max=s[y+1];
	}
	printf("%d",max);
}
