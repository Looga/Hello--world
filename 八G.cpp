#include<stdio.h>
#include<string.h>
struct ST{
	char name[20];
	int Mat;
	int Eng;
	int All;
}stu[100];
 
int main(){
	int n,m,i,j,z;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%s%d%d",stu[i].name,&stu[i].Mat,&stu[i].Eng);
		stu[i].All=stu[i].Mat+stu[i].Eng;
	}
	struct ST temp;
	for(m=0;m<(n-1);m++){
		for(z=m;z<n;z++){
			if(stu[z].All>stu[m].All){
				struct ST temp=stu[m];
				stu[m]=stu[z];
				stu[z]=temp;
				
			}
		}
	}
	
	for(j=0;j<n;j++){
	printf("%s %d\n",stu[j].name,stu[j].All);
    }
    return 0;
}
