#include<stdio.h>
int coinchange(int a[],int n,int s)
{
if(s==0)
return 1;
if(s<0)
return 0;
if(n<=0)
return 0;
return coinchange(a,n-1,s)+coinchange(a,n,s-a[n-1]);
}
int main()
{
int n,s;
printf("enter n and sum:\n");
scanf("%d %d",&n,&s);
int coin[n];
printf("enter the coins:");
for(int i=0;i<n;i++)
scanf("%d",&coin[i]);
int k=coinchange(coin,n,s);
printf("no. of possible ways to make the sum %d is %d",s,k);
}
