#include<stdio.h>
int ss(int wt[],int n,int w)
{
if(n==0)
return 0;
if(w==0)
return 1;
if(wt[n-1]<=w)
return ss(wt,n-1,w-wt[n-1])||ss(wt,n-1,w);
else
return ss(wt,n-1,w); }
int main()
{
int n,w,i;
printf("enter n,w\n");
scanf("%d %d",&n,&w);
int wt[n];
for(i=0;i<n;i++)
scanf("%d",&wt[i]);
if(ss(wt,n,w)==1)
printf("subset sum is possible with the given weight");
else
printf("subset sum is not possible with the given weight");
}


