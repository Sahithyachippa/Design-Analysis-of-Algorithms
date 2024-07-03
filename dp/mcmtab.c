#include<stdio.h>
#include<limits.h>
int min(int a,int b)
{
return a<b?a:b;
}
int mcm(int a[],int n)
{
int dp[n][n];
int m,k,i,j;
for( m=0;m<n;m++)
{
for(i=1;i<n-m;i++)
{
j=i+m;
if(i==j)
{
dp[i][j]=0;
}
else
{
dp[i][j]=INT_MAX;
for(k=i;k<j;k++)
{
int val=min(dp[i][j],dp[i][k]+dp[k+1][j]+a[i-1]*a[j]*a[k]);
dp[i][j]=val;
//printf("%d",dp[i][j]);
}
}
}
}
int p,q,r;
for( p=0;p<=n;p++)
{
q=p+1;
for(r=q;r<n;r++)
{
printf("5%d",dp[q][r]);
}
printf("\n");
}
return dp[1][n-1];
}

int main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
/*int i,j,k;
for(i=1;i<n;i++){
for(j=1;j<n;j++)
{
if(i==j)
dp[i][j]=0;
else
dp[i][j]=-1;
}
}*/
printf("minimum no. of miltiplications needed are :\n%d\n",mcm(a,n));
}
