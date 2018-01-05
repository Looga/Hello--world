#include<stdio.h>
int main(){
	int n,i,j=0,k,l,y;
	char a[555];
	char c,temp;
	scanf("%d",&n);
	
	for(i=0;i<(n+1);i++){
		setbuf(stdin, NULL);
		while((c=getchar())!='\n'){
			if(c>='a'&&c<='z'){
				a[j]=c;
				j++;
			}
		}
        setbuf(stdin, NULL);
		for(y=j;y>=0;y--){
			printf("%c",a[y]);
		}
		setbuf(stdin, NULL);
		if(i!=0)
		printf("\n");
		j=0;
		setbuf(stdin, NULL);
	}
	return 0;
}
