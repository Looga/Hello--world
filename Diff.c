#include<stdio.h>
struct singer{
	int j1;
	int  j2;
	int j3;
	int j4;
	int j5;
	int j6;
	double aver;
	int name;
}singer[10];

int main(){
	int i,j,x,y,n1,n2,m;
	for(i=0;i<10;i++){
		scanf("%d %d %d %d %d %d",&singer[i].j1,&singer[i].j2,&singer[i].j3,&singer[i].j4,&singer[i].j5,&singer[i].j6);
		singer[i].name=(i+1);
		singer[i].aver=(singer[i].j1+singer[i].j2+singer[i].j3+singer[i].j4+singer[i].j5+singer[i].j6)/6.0;
	}

	struct singer temp;
	for(j=0;j<9;j++){
		for(x=j;x<10;x++){
			if(singer[x].aver>singer[j].aver){
                n1=singer[j].name;
                n2=singer[x].name;
				temp=singer[j];
				singer[j]=singer[x];
				singer[x]=temp;
				singer[j].name=n2;
				singer[x].name=n1;
			}
			if(singer[j].aver==singer[x].aver){
				int tem;
				if(singer[j].name>singer[x].name){
					tem=singer[j].name;
					singer[j].name=singer[x].name;
					singer[x].name=tem;
				}
	    }

	}
	}
	for(y=0;y<10;y++){
		printf("%d %.2f\n",singer[y].name,singer[y].aver);
	}
	return 0;


}



