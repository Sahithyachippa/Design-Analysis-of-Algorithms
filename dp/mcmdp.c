#include<stdio.h>
#include<limits.h>
int dp[10][10];
int min(int a,int b)
{
return a<b?a:b;
}
int mcm(int a[],int s,int n)
{
int i,j,k;
if(s==n)
return dp[s][n]=0;
if(dp[s][n]!=-1)
return dp[s][n];
dp[s][n]=INT_MAX;
for(k=s;k<n;k++)
{
dp[s][n]=min(dp[s][n],mcm(a,s,k)+mcm(a,k+1,n)+a[s-1]*a[k]*a[n]);
printf("%d\n",dp[s][n]);
}
return dp[s][n];
}

/*int mcm(int *p,int n)
{
int i=1,j=n-1;
return mcmm(p,i,j);
}*/
int main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
  dp[i][j]=-1;
  }
  }
printf("minimum no. of miltiplications needed are %d\n",mcm(a,1,n-1));
}
