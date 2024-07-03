#include<stdio.h>
//#include<limits.h>
int dp[100][100];
int min(int a,int b)
{
return a<b?a:b;
}
int mincoins(int a[],int n,int s)
{
if(s==0)
  return dp[n][s]=0;
else if(n==0)
 return dp[n][s]=999999;
else if(s==0 && n==0)
 return dp[n][s]=1;
 else if(dp[n][s]!=-1)
  return dp[n][s];
else if(a[n-1]<=s)
    return dp[n][s]=min((1+mincoins(a,n,s-a[n-1])),mincoins(a,n-1,s));
else
    return dp[n][s]= mincoins(a,n-1,s);
       
}
int main()
{
int n,s,i,j;
printf("enter n and sum:\n");
scanf("%d %d",&n,&s);
int coin[n];
printf("enter the coins:");
for(i=0;i<n;i++)
scanf("%d",&coin[i]);
for(i=0;i<=n;i++)
{
for(j=0;i<=s;j++)
{
 dp[i][j]=-1;
 }
 }
int k=mincoins(coin,n,s);
printf("minimum coins required  to make the sum %d is %d",s,k);
}
