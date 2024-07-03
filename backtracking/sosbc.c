 #include<stdio.h>
int a[10],wt[10];
int sum1=0;
int array(int n,int sum)
{
 sum1=0;
 {
  for(int i=0;i<n;i++)
  {
  if(a[i]==1)
  sum1=sum1+wt[i];
  }
 if(sum1==sum)
 {
 for(int i=0;i<n;i++){
 printf("%d",a[i]);
 }
 printf("\n");
 }
 }
 } 
int sos(int index,int size,int sum)
{
  if(index==size)
  {
  array(size,sum);
  return 0;
  }
 else
 {
  for(int i=0;i<2;i++)
  {
   a[index]=i;
   sos(index+1,size,sum) ;
  } }
  }

int main(){
 int n,sum;
 scanf("%d %d",&n,&sum);
 printf("enter weights:");
  for(int i=0;i<n;i++)
  scanf("%d",&wt[i]);
 sos(0,n,sum);
 }
