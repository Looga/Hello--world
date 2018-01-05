#include<stdio.h>
#include<string.h>
int Csucks(int x,int y){
	if(x==1){
		if(y==0) printf("*****");
		if(y==1) printf("    *");
		if(y==2) printf("*****");
		if(y==3) printf("*****");
		if(y==4) printf("*   *");
		if(y==5) printf("*****");
		if(y==6) printf("*****");
		if(y==7) printf("*****");
		if(y==8) printf("*****");
		if(y==9) printf("*****");
	}
	if(x==2||x==3){
		if(y==0) printf("*   *");
		if(y==1) printf("    *");
		if(y==2) printf("    *");
		if(y==3) printf("    *");
		if(y==4) printf("*   *");
		if(y==5) printf("*    ");
		if(y==6) printf("*    ");
		if(y==7) printf("    *");
		if(y==8) printf("*   *");
		if(y==9) printf("*   *");
	}
	if(x==4){
		if(y==0) printf("*   *");
		if(y==1) printf("    *");
		if(y==2) printf("*****");
		if(y==3) printf("*****");
		if(y==4) printf("*****");
		if(y==5) printf("*****");
		if(y==6) printf("*****");
		if(y==7) printf("    *");
		if(y==8) printf("*****");
		if(y==9) printf("*****");
	}
	if(x==5||x==6){
		if(y==0) printf("*   *");
		if(y==1) printf("    *");
		if(y==2) printf("*    ");
		if(y==3) printf("    *");
		if(y==4) printf("    *");
		if(y==5) printf("    *");
		if(y==6) printf("*   *");
		if(y==7) printf("    *");
		if(y==8) printf("*   *");
		if(y==9) printf("    *");
	}
	if(x==7){
	    if(y==0) printf("*****");
		if(y==1) printf("    *");
		if(y==2) printf("*****");
		if(y==3) printf("*****");
		if(y==4) printf("    *");
		if(y==5) printf("*****");
		if(y==6) printf("*****");
		if(y==7) printf("    *");
		if(y==8) printf("*****");
		if(y==9) printf("*****");
	}
}


int main(){
	int k,x;
	int i,j,m,n;
	int a[4];
	scanf("%d",&k);
	
	for(i=0;i<k;i++){
		scanf("%d",&x);
		if(0<=x&&x<=9){
		a[0]=x;
		j=1;
	    }
		if(10<=x&&x<=99){
		a[0]=x/10;
		a[1]=x%10;
		j=2;
	    }
		if(100<=x&&x<=999){
		a[0]=x/100;
		a[1]=(x%100)/10;
		a[2]=x%10;
	    j=3;
		}
		if(1000<=x&&x<=9999) {
		a[0]=x/1000;
		a[1]=(x%1000)/100;
		a[2]=(x%100)/10;
		a[3]=x%10;
		j=4;
	    }
	    printf("%d:\n",x);
		for(m=1;m<=7;m++){
			for(n=0;n<j;n++){
				Csucks(m,a[n]);
				printf("  ");
			}
			printf("\n");
		}
		
	}
	
	
	return 0;
} 




























