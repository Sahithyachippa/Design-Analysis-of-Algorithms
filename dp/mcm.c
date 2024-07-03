#include<stdio.h>
#include<limits.h>
int mcm(int a[],int i,int j)
{
if(i==j)
return 0;
int k;
int min=INT_MAX;
int count;
for(k=i;k<j;k++)
{
count=mcm(a,i,k)+mcm(a,k+1,j)+a[i-1]*a[k]*a[j];
if(count<min)
min=count;
}
return min;
}

int main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("minimum no. of miltiplications needed are %d\n",mcm(a,1,n-1));
}
