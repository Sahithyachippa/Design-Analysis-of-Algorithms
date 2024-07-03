#include<stdio.h>
int ss(int wt[],int n,int w)
{
int a[n+1][w+1],i,j;
for(i=0;i<=n;i++)
a[i][0]=1;
for(i=1;i<=w;i++)
a[0][i]=0;
for(i=1;i<=n;i++)
{
for(j=1;j<=w;j++)
{
if(wt[i-1]<=j)
a[i][j]=a[i-1][j]||a[i-1][j-wt[i-1]];
else
a[i][j]=a[i-1][j];
}
}
return a[n][w];
 }
int main()
{
int n,w,i;
printf("enter n,w\n");
scanf("%d %d",&n,&w);
int wt[n];
for(i=0;i<n;i++)
scanf("%d",&wt[i]);
printf("done\n");
int v=ss(wt,n,w);
if(v==1)
printf("subset sum is possible with the given weight");
else
printf("subset sum is not possible with the given weight");
//printf("no. of possible ways are %d",v);
}


