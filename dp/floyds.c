#include<stdio.h>
#define V 4
#define INF 99999
void print(int graph[][V]);
void floyds(int graph[][V])
{
int i,j,k;
for(k=0;k<V;k++)
{
for(i=0;i<V;i++)
{
for(j=0;j<V;j++)
{
if(graph[i][k]+graph[k][j]<graph[i][j])
graph[i][j]=graph[i][k]+graph[k][j];
}
}
}
print(graph);
}
void print(int graph[][V])
{
printf("shortest distsnce matrix is\n");
for(int i=0;i<V;i++)
{
for(int j=0;j<V;j++)
{
if(graph[i][j]==INF)
printf("%7s","INF");
else
printf("%7d",graph[i][j]);
}
printf("\n");
}
}
int main()
{
int graph[V][V]={{0,5,INF,10},
                {INF,0,3,INF},
                {INF,INF,0,1},
                {INF,INF,INF,0}};
 floyds(graph);
 }
                 
