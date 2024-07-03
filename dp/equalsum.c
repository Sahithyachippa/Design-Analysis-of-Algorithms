 #include<stdio.h>
int a[100];
int ss(int wt[],int n,int w)
{
if(w==0)
return 1;
if(n==0&&w!=0)
return 0;

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
scanf("%d",&wt[i]);;
int x=w/2;
int sum=0;
for(i=0;i<n;i++)
sum=sum+wt[i];
if(sum%2!=0)
printf("false i.e, equal sum is not possible");
else
{
if(ss(wt,n,x)==1)
printf("equal sum is possible with the given weight");
else
printf("false i.e, equal sum is not possible");
}
}


