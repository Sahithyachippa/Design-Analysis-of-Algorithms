 #include<stdio.h>
 #include<limits.h>
#include<math.h>
struct point{
int x,y;
};
int main()
{
int i,j,d,x1,x2,y1,y2,n;
int min=INT_MAX;
printf("enter the array size\n");
scanf("%d",&n);
struct point p[n];
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d %d",&p[i].x,&p[i].y);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
d=((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y));
if(d<min)
{
min=d;
x1=p[i].x;
x2=p[j].x;
y1=p[i].y;
y2=p[j].y;
}
}
}
printf("minimum distace is:%f\n",sqrt(min));
printf("the minimum distance coordinates are\n");

printf("(%d,%d) and (%d,%d)",x1,y1,x2,y2);
}	
