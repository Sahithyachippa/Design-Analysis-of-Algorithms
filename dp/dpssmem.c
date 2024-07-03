//subsetmemorization
#include<stdio.h>
int dp[10][10];
int ss(int wt[],int n,int w)
{
int i,j;
if(w==0)
 return dp[n][w]=1;
else if(n==0&&w!=0)
 return dp[n][w]=0; 
else if(dp[n][w]!=-1)
return dp[n][w];
else if(wt[n-1]<=w)
return dp[n][w]=ss(wt,n-1,w-wt[n-1])||ss(wt,n-1,w);
else
return dp[n][w]=ss(wt,n-1,w);
 }
int main()
{
int n,w,i;
printf("enter n,w\n");
scanf("%d %d",&n,&w);
int wt[n];
for(i=0;i<n;i++)
scanf("%d",&wt[i]);
//printf("done\n");
for(i=0;i<=n;i++)
{
for(int j=0;j<=w;j++)
{
dp[i][j]=-1;
}
}
 int v=ss(wt,n,w);
if(v==1)
printf("subset sum is possible with the given weight");
else
printf("subset sum is not possible with the given weight");
//printf("ways are %d",v);
}

