#include<stdio.h>
void swap(int a[],int i,int j)
{
int t;
t=a[i];
a[i]=a[j];
a[j]=t;
}
int main()
{
int n,w,i,j,sum=0;
printf("enter n,w:");
scanf("%d %d",&n,&w);
int wt[n];
int val[n];
printf("enter the elments of weight arrat:\n");
for( i=0;i<n;i++)
scanf("%d",&wt[i]);
printf("enter the elments of val arrat:\n");
for(i=0;i<n;i++)
scanf("%d",&val[i]);
//sorting
i=0;
while(i<n)
{
for(j=0;j<n-1-i;j++)
{
if((val[j]/wt[j])<(val[j+1]/wt[j+1]))
{
swap(wt,j,j+1);
swap(val,j,j+1);
}
}
i++;
}
//finding
for(i=0;i<n;i++)
{
if(w>wt[i])
{
sum=sum+val[i];
w=w-wt[i];
}
else
{
sum=sum+(val[i]/wt[i]*w);
w=0;
}
}
printf("max value %d\n",sum);
}
