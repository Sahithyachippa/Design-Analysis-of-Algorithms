#include<stdio.h>

int binomial(int n,int k)
{
int dp[n][k];

if(n==k||k==0)
return dp[n][k]=1;
if(dp[n][k]==-1)
return dp[n][k];
else
return dp[n][k]=binomial(n-1,k-1)+binomial(n-1,k);
}
int main()
{
int n,k;
printf("enter n and k\n");
scanf("%d %d",&n,&k);
printf("%d",binomial(n,k));


}
