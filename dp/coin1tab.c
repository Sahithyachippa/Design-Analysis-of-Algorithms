#include<stdio.h>
int coinchange(int a[],int n,int s)
{
int dp[n+1][s+1],i,j;
for(i=0;i<=n;i++)
dp[i][0]=1;
for(i=1;i<=s;i++)
dp[0][i]=0;
for(i=1;i<=n;i++)
{
for(j=1;j<=s;j++)
{
if(a[i-1]<=j)
dp[i][j]=dp[i-1][j]+dp[i][j-a[i-1]];
else
dp[i][j]=dp[i-1][j];
}
}
for(i=0;i<=n;i++)
{
for(j=0;j<=s;j++)
printf("%4d",dp[i][j]);
printf("\n");
}
return dp[n][s];
}
int main()
{
int n,s;
printf("enter n and sum:\n");
scanf("%d %d",&n,&s);
int coin[n];
printf("enter the coins:");
for(int i=0;i<n;i++)
scanf("%d",&coin[i]);
int k=coinchange(coin,n,s);
printf("no. of possible ways to make the sum %d is %d",s,k);
}
