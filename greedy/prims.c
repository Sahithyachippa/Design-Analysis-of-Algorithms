#include<stdio.h>
#include<limits.h>
#define v 5
int prims(int graph[v][v])
{
int visited[v];
 for(int i=0;i<v;i++)
 visited[i]=0;
int i=0,c=1,j,s,d;
visited[i]=1;
while(c<v)
{
int min=INT_MAX;
for(i=0;i<v;i++)
{
if(visited[i]==1)
{
for(j=0;j<v;++j)
{
if(visited[j]==0&&graph[i][j]!=0)
{
if(graph[i][j]<min)
{
min=graph[i][j];
s=i;
d=j;
}}
}
}
}
visited[d]=1;
c++;
printf("%d to %d is %d\n",s,d,graph[s][d]);
}
}
int main()
{
    int graph[v][v] = { { 0, 0, 3, 0, 0 },
                        { 0, 0, 10, 4, 0 },
                        { 3, 10, 0, 2, 6 },
                        { 0, 4, 2, 0, 1 },
                        { 0, 0, 6, 1, 0 } };
 

    prims(graph);
    }
