#include<stdio.h>  
  
long long int Count(long long int n){   
    long long int count = 0;  
     
    long long int Factor = 1;  
      
    long long int LowerNum = 0;  
      
    long long int CurrNum = 0;  
      
    long long int HigherNum = 0;  
    if(n <= 0){  
        return 0;  
    }  
    while(n / Factor != 0){  
          
        LowerNum = n - (n / Factor) * Factor;  
          
        CurrNum = (n / Factor) % 10;  
          
        HigherNum = n / (Factor * 10);  
         
        if(CurrNum == 0){  
             
            count += HigherNum * Factor;  
        }  
          
        else if(CurrNum == 1){  
              
            count += HigherNum * Factor + LowerNum + 1;  
        }  
        
        else{  
             
            count += (HigherNum + 1) * Factor;  
        }  
         
        Factor *= 10;  
    }  
    return count;  
}  
  
int main(){  
    long long int a;  
    while(scanf("%lld",&a) != EOF){  
        printf("含有1的个数为%lld\n",Count(a));  
    }  
    return 0;  
}  

