#include<stdio.h>
#include<limits.h>
int minimum(int a[],int n)
{
int s=0,i,j;
for(int i=0;i<n;i++)
s+=a[i];
int dp[n+1][s+1];
for(i=0;i<=n;i++)
dp[i][0]=1;
for(i=1;i<=s;i++)
dp[0][i]=0;
for(i=1;i<=n;i++)
{
for(j=1;j<=s;j++)
{
if(i!=0 && j!=0)
dp[i][j]=-1;
}
}
if(dp[n][s]!=-1)
return dp[n][s];
if(a[n-1]<=s)
return dp[n][s]=minimum(dp,n-1);
else
return dp[n][s]=minimum(dp,n-1);
int diff=INT_MAX;
for(j=s/2;j>=0;j--)
{
if(dp[n][j]==1)
{
diff=s-2*j;
break;
}
}
return diff;
}
int main()
{
int n;
printf("enter n:");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
printf(" min diff is :%d",minimum(a,n));
}
