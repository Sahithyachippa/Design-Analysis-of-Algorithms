#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void quicksort(int a[],int start,int end)
{
int i,j,temp;
if(start<end)
{
i=start;
j=end;
int pivot=start;
while(i<j)
{
while(a[i]<=a[pivot])
i++;
while(a[j]>a[pivot])
j--;
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp=a[j];
a[j]=a[pivot];
a[pivot]=temp;
quicksort(a,start,j-1);
quicksort(a,j+1,end);
}
}

int main()
{
clock_t t;
t=clock();
int n,i;
n=1000000;
int a[n];
printf("enter data: ");
for(i=0;i<n;i++)
{
a[i]=rand()%100;
printf("%d ",a[i]);
}
quicksort(a,0,n-1);
printf("sorted elements are \n: ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
t=clock()-t;
double time_taken=((double)t)/CLOCKS_PER_SEC;
printf("\n%f",time_taken);
}
