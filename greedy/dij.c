#include<stdio.h>
#include<limits.h>
void print(int cost[],int v)
{int c=0;
  for(int i=0;i<v;i++)
  {
   printf("%d node- %d distance\n",i,cost[i]);
   c=c+cost[i];
   }
   printf("total cost is %d",c);
  } 
void dij(int g[][10],int visit[],int cost[],int v)
{
  int src=0;
  cost[src]=0;
  for(int k=0;k<v;k++){
  int min=INT_MAX,index;
  for(int i=0;i<v;i++)
  {
   if(cost[i]<=min&&visit[i]==0)
   {
    min=cost[i];
    index=i;
    }
    }
  visit[index]=1;
  for(int j=0;j<v;j++)
  {
    if(visit[j]==0&&g[index][j]!=-1)
    {
     if(cost[j]>cost[index]+g[index][j])
     cost[j]=cost[index]+g[index][j];
     }
     }
   }
   
   print(cost,v);
   }    
int main()
{
int g[10][10],visit[10],cost[10],j,v,i;
scanf("%d",&v);
for(i=0;i<v;i++)
{
  for(j=0;j<v;j++)
  { 
    scanf("%d",&g[i][j]);
    }
   }
  for(i=0;i<v;i++)
   visit[i]=0;  
for(i=0;i<v;i++)
   cost[i]=INT_MAX;  
dij(g,visit,cost,v);
}


