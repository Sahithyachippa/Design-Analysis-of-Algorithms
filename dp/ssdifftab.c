#include<stdio.h>
#include<limits.h>
/*int min(int a,int b)
{
return a<b?a:b;
}
int minrec(int a[],int n,int s1,int s)
{
if(n==0)
return abs((s-s1)-s1);
return min(minrec(a,n-1,s1+a[n-1],s),minrec(a,n-1,s1,s));

}*/
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
if(a[i-1]<=j)
dp[i][j]=dp[i-1][j-a[i-1]];
else
dp[i][j]=dp[i-1][j];
}
}
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
printf("min diff is %d",minimum(a,n));
}
