#include<stdio.h>

int WonderWoman(int i){                   //定义WonderWoman函数以判断一个数是否为素数 
int i1,r,y;
y=i;
for(i1=2;i1<i;i1++){
		r=i%i1;
		if(r==0)
		break;
}
if(i1==i)                           //这个数为素数，令它为1 
y=1; 
else                                //这个数非素数，令它为0 
y=0 ;
return y; 
} 
 

int Batman(int i){              //定义Batman函数以获取超级素数的后三个条件b,c,d 
int x1=0,b=0,c=1,d=0,z;
z=i;
while(z!=0)
{                                  
x1=z%10;
z=(z-x1)/10;
b+=x1;
c*=x1;
d+=x1*x1;
}
return b,c,d;
}


int Superman(int i,int b,int c,int d){            //定义Superman函数以确定i是否为超级素数  
    int x2,x3; 
	x3=WonderWoman(i);
	b=WonderWoman(b);
	c=WonderWoman(c);
	d=WonderWoman(d);             //i不为超级素数，i=0  为超级素数时返回本身 
	x2=x3+b+c+d;
	if(x2!=4)
	i=0;
	return i; 
	
}


int main(){
	
	int i,q=0,w=0,e,x3,x4;
	
	for(i=100;i<=9999;i++){
		            
        int x1=0,b=0,c=1,d=0,z;
        z=i;
        while(z!=0)
        {                                  
        x1=z%10;
        z=(z-x1)/10;
        b+=x1;
        c*=x1;
        d+=x1*x1;}
		
		x4=Superman(i,b,c,d);
		if(x4!=0){
			q+=1;
			w+=i;	
		}
	
	
	}
	printf("超级素数的个数为%d\n所有超级素数的和为%d\n",q,w);
	return 0;
	
} 


