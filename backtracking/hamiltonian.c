#include<stdio.h>
int arr[100][100];
int a[10],n;
int issafe(int k,int node)
{
    for(int i=0;i<k;i++)
    {
          if(a[i]==node||arr[a[k-1]][node]==0)
          {
             return 0;
          }
    }
    return 1; 
}
int hamiltonian(int k)
{
    for(int node=1;node<n;node++)
    {
       if(issafe(k,node))
       {
         a[k]=node;
         if(k==n-1&&arr[a[k]][0]!=0)
         {
             for(int i=0;i<n;i++)
             {
                printf("%d\t",a[i]);
             }
             printf("\n");
         }
         hamiltonian(k+1);
       }
    }       
}
int main()
{  //int n;
    printf("enter no.of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
         if(i==j)
         {
             arr[i][j]=0;
             continue;
         }
         else
         {
             printf("arr[%d][%d]=",i,j);
             scanf("%d",&arr[i][j]);
         }
      }
    }
    a[0]=0;
    for(int i=1;i<n;i++)
    {
          a[i]=0;
    }
    hamiltonian(1);    
}
