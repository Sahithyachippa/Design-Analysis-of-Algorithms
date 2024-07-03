#include<stdio.h>
struct point{
int x,y;

};
int main()
{int n,i,j,a,b,c,k,d,np,nn;
scanf("%d",&n);
struct point p[n];
for(i=0;i<n;i++)
scanf("%d %d",&p[i].x,&p[i].y);
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
a=p[j].y-p[i].y;
b=p[i].x-p[j].x;
c=(p[i].y*p[j].x)-(p[j].y*p[i].x);
np=0,nn=0;
for(k=0;k<n;k++)
{
if(k==i||k==j)
continue;
else
{
d=a*p[k].x+b*p[k].y+c;
if(d>0)
np++;
else if(d<0)
nn++;
}
}
if(np==0||nn==0)
{
printf("(%d %d),(%d %d)",p[i].x,p[i].y,p[j].x,p[j].y);
printf("\n");
}
}
}
}


