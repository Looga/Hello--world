#include<stdio.h>

int WonderWoman(int i){                   //����WonderWoman�������ж�һ�����Ƿ�Ϊ���� 
int i1,r,y;
y=i;
for(i1=2;i1<i;i1++){
		r=i%i1;
		if(r==0)
		break;
}
if(i1==i)                           //�����Ϊ����������Ϊ1 
y=1; 
else                                //�����������������Ϊ0 
y=0 ;
return y; 
} 
 

int Batman(int i){              //����Batman�����Ի�ȡ���������ĺ���������b,c,d 
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


int Superman(int i,int b,int c,int d){            //����Superman������ȷ��i�Ƿ�Ϊ��������  
    int x2,x3; 
	x3=WonderWoman(i);
	b=WonderWoman(b);
	c=WonderWoman(c);
	d=WonderWoman(d);             //i��Ϊ����������i=0  Ϊ��������ʱ���ر��� 
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
	printf("���������ĸ���Ϊ%d\n���г��������ĺ�Ϊ%d\n",q,w);
	return 0;
	
} 


