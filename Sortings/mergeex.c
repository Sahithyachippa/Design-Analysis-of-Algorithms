#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
#define max 20
int a[max];
int size,mid,i,j;
int leftlen,rightlen;
void merge(int a[],int beg,int mid,int end)
{
leftlen=mid-beg+1;
rightlen=end-mid;

int leftarray[leftlen];
int rightarray[rightlen];

for(i=0;i<leftlen;i++)
{
leftarray[i]=a[beg+i];
}
for(j=0;j<rightlen;j++)
{
rightarray[j]=a[mid+1+j];
}
i=0;
j=0;
int k=beg;
while(i<leftlen && j<rightlen)
{
if(leftarray[i]<=rightarray[j])
{
a[k]=leftarray[i];
i++;
k++;
}
else
{
a[k]=rightarray[j];
j++;
k++;
}
}
while(i<leftlen)
{
a[k]=leftarray[i];
i++;
k++;
}
while(j<rightlen)
{
a[k]=rightarray[j];
j++;
k++;
}
for(k=0;k<size;k++)
{
cout<<a[k]<<endl;
}
}
void mergesort(int a[],int beg,int end)
{
if(beg<end)
{
mid=(beg+end)/2;
mergesort(a,beg,mid);
mergesort(a,mid+1,end);
merge(a,beg,mid,end);
}
}


int main()
{
int i;
//cout<<"enter the size : ";
//cin>>size;
size=10;

for(i=0;i<size;i++)
{
a[i]=rand();
cout<<a[i];
}
mergesort(a,0,size-1);
//intarray(a,size);
}
