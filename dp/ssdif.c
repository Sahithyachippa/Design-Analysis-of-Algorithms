#include<stdio.h>
#include<stdlib.h>
int min(int a,int b)
{
return a<b?a:b;
}
int minrec(int a[],int n,int s1,int s)
{
if(n==0)
return abs((s-s1)-s1);
return min(minrec(a,n-1,s1+a[n-1],s),minrec(a,n-1,s1,s));

}
int minimum(int a[],int n)
{
int s=0;
for(int i=0;i<n;i++)
s+=a[i];
return minrec(a,n,0,s);
}
int main()
{
int n;
printf("enter n:");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
printf(" minimum difference is :%d",minimum(a,n));
}
