#include<stdio.h>
int main(){
	int a[50][50];
	int n,m,flag,max,maxj,i,j,k,x=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
    for (i = 0; i < n; i++)
    {
        max = a[i][0];            
        maxj = 0;
        for (j = 0; j < m; j++)
        {
            if (a[i][j]>max)
            {
                max = a[i][j];
                maxj = j;
            }
        }
        
        flag = 1;
        for (k = 0; k < n; k++)
        {
            if (max>a[k][maxj])
                flag = 0;
                continue;
        }
        if (flag)
        {
            printf("a[%d][%d]=%d\n", i, maxj, max);
            x=x+1;
        }
    }
    if (x==0)
        printf("NO");
    printf("\n");
    return 0;
	
} 
