#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
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
bool issafe(int index,int val,int size)
  {
   for(int i=0;i<index;i++)
    {
    if(a[i]==val)
     return false;
    }   
  return true;
  }

   
int per(int index,int size)
  {int i;
   if(index==size)
    {
    array(size);
    printf("\n");
    return 0;
    }
   else
   {
    for(i=0;i<size;i++)
     {
     if(issafe(index,i,size))
     {
     a[index]=i;
     per(index+1,size);
     }
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
