#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define max 1000000

int size=1000000;
int a[max];

void  sort(int a[],int size)
{
for(int j=0;j<size;j++)
{
for(int k=0;k<size;k++)
{
if(a[j]<a[k])
{
int temp=a[j];
a[j]=a[k];
a[k]=temp;
}
}
}
for(int j=0;j<size;j++)
{
printf("%d\n",a[j]);
}

}
int main()
{
clock_t t;
t=clock();
int i;
//printf("enter the size of an array: ");
//scanf("%d",&size);
int a[size];
for(i=0;i<size;i++)
{
a[i]=rand()%100;
printf("%d ",a[i]);
}
sort(a,size);
t=clock()-t;
double time_taken=((double)t)/CLOCKS_PER_SEC;
printf("%f",time_taken);
}



//working perfectly with random array
