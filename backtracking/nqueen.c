#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
int a[10];
int array(int n)
{
 for(int i=1;i<=n;i++)
 {
 printf("%d",a[i]);
 }
}
bool issafe(int m,int n)
{
int i;
for(i=0;i<m;i++)
{
if(a[i]==n||abs(m-i)==abs(n-a[i]))
 return false;
 }
 return true;
 }
int nqueen(int index,int size)
{
 int i;
 if(index==size+1)
 {
 array(size);
 printf("\n");
 return 0;
 }
 else
 {
 for(i=1;i<=size;i++)
 {
 if(issafe(index,i))
 {
 a[index]=i;
 nqueen(index+1,size);
 }
 }
 }
} 
  
int main()
{
int n;
scanf("%d",&n);
nqueen(1,n);
}
