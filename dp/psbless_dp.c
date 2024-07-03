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
if(i!=0 && j!=0)
a[i][j]=-1;
}
}
if(a[n][w]!=-1)
return a[n][w];
if(wt[n-1]<=w)
return a[n][w]=ss(wt,n-1,w-wt[n-1])+ss(wt,n-1,w);
else
return a[n][w]=ss(wt,n-1,w);
 }
int main()
{
int n,w,i;
printf("enter n,w\n");
scanf("%d %d",&n,&w);
int wt[n];
for(i=0;i<n;i++)
scanf("%d",&wt[i]);
int v=ss(wt,n,w);
printf("%d",v);
//printf("subset sum is not possible with the given weight");
}

