#include<stdio.h>
int dp[10][10];
int coinchange(int coin[],int n,int s)
{
if(s==0)
 return dp[n][s]=1;
 else if(n==0&&s!=0)
  return dp[n][s]=0;
else if(dp[n][s]!=-1)
 return dp[n][s];
 else
 {
 if(coin[n-1]<=s)
  return dp[n][s]=coinchange(coin,n,s-coin[n-1])+coinchange(coin,n-1,s);
 else
  return dp[n][s]=coinchange(coin,n-1,s);
  }
  }  
 
int main()
{
int n,s,i,j;
printf("enter n and sum:\n");
scanf("%d %d",&n,&s);
int coin[n];
printf("enter the coins:");
for(i=0;i<n;i++)
  {
  scanf("%d",&coin[i]);
  }
for(i=0;i<=n;i++)
{
for(j=0;i<=s;j++)
{
 dp[i][j]=-1;
 }
 }
 
printf("no. of possible ways to make the sum %d is %d",s,coinchange(coin,n,s));
}
