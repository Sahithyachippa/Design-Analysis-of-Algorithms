#include<stdio.h>
int a[10];
int array(int n)
{
  for(int i=0;i<n;i++)
  printf("%d",a[i]);
 } 
  
int bin(int k,int n){
if(k==n){
 array(n);
 printf("\n");
 return 0;
 }
else
 {
 for(int i=0;i<2;i++)
 {
 a[k]=i;
 bin(k+1,n);
 }
 } 
 } 

int main()
{
int n;
scanf("%d",&n);
bin(0,n);
}
