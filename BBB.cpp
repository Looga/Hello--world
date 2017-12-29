#include<stdio.h>
int main(){
    int n,m,k,i,j,temp,x,y,z;
    int a[10000];
    scanf("%d",&n);
    
    for(x=0;x<n;x++){
    	scanf("%d%d",&m,&k);
    	for(y=0;y<m;y++){
    		scanf("%d",&a[y]);
    	}
    	for(i=0;i<m;i++){
		for(j=i+1;j<m;j++){
			if(a[j]<a[i]){ 
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
			
		}
	}
	
	if(k>m)
	printf("error");
	else{
		for(z=m;z>(m-k+1);z--){
			if(a[z-1]==a[z-2])
			printf("error");
			break;
		}
	printf("%d\n",a[m-k]);
    }
    i=j=x=y=0;
    }
	return 0;
}

