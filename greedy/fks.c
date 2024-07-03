#include<stdio.h>
int fks(int n,int wt[],int val[],int w){
if(n==0||w==0)
 return 0;
else if(wt[n-1]<=w)
 return val[n-1]+fks(n-1,wt,val,w-wt[n-1]);
else
  return ((val[n-1]/wt[n-1])*w);
}
int main()
{
int n,i,j,w,t1,t2;
printf("enter n,w :");
scanf("%d %d",&n,&w);
int wt[n],val[n];
printf("enter wt,val elements");
for(i=0;i<n;i++)
 scanf("%d %d",&wt[i],&val[i]);
for(i=0;i<n-1;i++)
{
  for(j=0;j<n-i-1;j++)
  {
   if((val[j]/wt[j])>(val[j+1]/wt[j+1]))
    {
    t1=wt[j];
    wt[j]=wt[j+1];
    wt[j+1]=t1;
    t2=val[j];
    val[j]=val[j+1];
    val[j+1]=t2;
    }
   }
  }
  printf("value is %d",fks(n,wt,val,w));
  }  
