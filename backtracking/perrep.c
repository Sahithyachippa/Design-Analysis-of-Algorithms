#include<stdio.h>
int a[100];
int count=0;
int array(int n)
  {
   for(int i=0;i<n;i++)
    {
       printf("%d",a[i]);
    }
   count++;
  }
   
int per(int index,int size)
  {int i;
   if(index==size)
    {
    array(4);
    printf("\n");
    return 0;
    }
   else
   {
    for(i=0;i<size;i++)
     {
    
     a[index]=i;
     per(index+1,size);
   
     }
   }
  }
int main()
{
int n;
scanf("%d",&n);
per(0,n);
printf("permutations are %d",count);
}
