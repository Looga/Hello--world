#include<stdio.h>
struct point{
	int x;
	int y;
}; 
void getStruct(struct point p){
	scanf("%d",&p.x);
	scanf("%d",&p.y);
	printf("%d,%d\n",p.x,p.y);
}
void output(struct point p){
	printf("%d,%d",p.x,p.y);
}

int main(){
	struct point y={0,0};
	getStruct(y);
	output(y);
}


