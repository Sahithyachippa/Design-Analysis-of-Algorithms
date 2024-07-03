#include<stdio.h>
//int a[100];

int ss(int wt[],int n,int w)
{
int dp[n+1][w+1],i,j;
for(i=0;i<=n;i++)
return dp[n][0]=1;
for(i=1;i<=n;i++)
return dp[0][i]=0;
for(i=1;i<=n;i++)
{
for(j=1;j<=w;j++)
{
if(wt[i-1]<=j)
return dp[i][j]=dp[i-1][w-wt[n-1]]||dp[n-1][w];
else
return dp[i][j]=dp[n-1][w];
 }
 }
 return dp[n][w];
 }
int main()
{
int n,w,i;
printf("enter n,w\n");
scanf("%d %d",&n,&w);
int wt[n];
for(i=0;i<n;i++)
scanf("%d",&wt[i]);;
int x=w/2;
int sum=0;
for(i=0;i<n;i++)
sum=sum+wt[i];
if(sum%2!=0)
printf("false i.e, equal sum is not possible");
else
{
if(ss(wt,n,w)==1)
printf("equal sum is possible with the given weight");
else
printf("false i.e, equal sum is not possible");
}
}
