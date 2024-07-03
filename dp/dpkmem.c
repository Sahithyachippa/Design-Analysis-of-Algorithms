#include <stdio.h>
int a[10][10];
int max(int a, int b)
 { return (a > b)? a : b; }
 int ks(int w, int wt[], int val[], int n)
{
int i,j;
if(n==0||w==0)
 return a[n][w]=0;
       
else if(a[n][w]!=-1)
return a[n][w];
else if(wt[n-1]<=w)
return a[n][w]=max(val[n-1]+ks(w-wt[n-1],wt,val,n-1),ks(w,wt,val,n-1));
else
return a[n][w]=ks(w,wt,val,n-1);

}
int main()

{
int n,w,i,j;
printf("enter n,w\n");
scanf("%d %d",&n,&w);
int wt[n],val[n];
printf("weight arraey\n");
for(i=0;i<n;i++)
scanf("%d",&wt[i]);
printf("val arraey\n");
for(i=0;i<n;i++)
scanf("%d",&val[i]);
for (i = 0; i <= n; i++)
   {
       for (j= 0; j <= w; j++)
       {
       
       a[i][j]=-1;
       }
      }
printf(" total val is %d",ks(w,wt,val,n));

    
}
