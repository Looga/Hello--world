#include<stdio.h>
int main(){
	int y,m,d;
	int i,j,s,r;
	int sum=0,final;
	int a[12];
	scanf("%d-%d-%d",&y,&m,&d);
	for(i=1900;i<y;i++){
		if(i%4==0&&i%100!=0||i%400==0)
		sum=sum+366;
		else
		sum=sum+365;	
	}
	a[0]=a[2]=a[4]=a[6]=a[7]=a[9]=a[11]=31;
	a[3]=a[5]=a[8]=a[10]=30;
	if(y%4==0&&y%100!=0||y%400==0)
	a[1]=29;
	else
	a[1]=28;
	for(j=0;j<(m-1);j++){
		sum=sum+a[j];
	} 
	sum=sum+d;
	final=sum%7;
	if(final==1)
	printf("Monday");
	if(final==2)
	printf("Tuesday");
	if(final==3)
	printf("Wensday");
	if(final==4)
	printf("Thursday");
	if(final==5)
	printf("Friday");
	if(final==6)
	printf("Saturday");
	if(final==0)
	printf("Sunday");
    return 0;
} 











