#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int findpar(int p[],int i)
{
	if(p[i]==-1)
		return i;
	else
		return findpar(p,p[i]);
}

int findMin(int adj[][10],int *u,int *v,int n)
{
	int i,j,min=INT_MAX;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(min>adj[i][j] && adj[i][j]!=-1)
			{
				min=adj[i][j];
				*u=i;*v=j;
			}
		}
	}
	return min;
}
void kruskals(int adj[][10],int p[],int n)
{
	int u=0,pu,pv,v=0,min,i;
	
	//printf("Hello\n");
	for(i=0;i<n;i++)
	{
		min=findMin(adj,&u,&v,n);
		pu=findpar(p,u);
		pv=findpar(p,v);
		if(pu!=pv)
		{
			//printf("w\n");
			p[pv]=pu;
			printf("\n%d to %d cost %d",u,v,min);
		}
		adj[u][v]=-1;
		
	}
}
int main()
{
	int i,j,n;
	printf("Enter no.of nodes:");
	scanf("%d",&n);
	int adj[10][10];
	int p[10];
	for(i=0;i<n;i++)
	{
		p[i]=-1;
	}
	printf("Enter adjacency matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&adj[i][j]);
		}
	}
	kruskals(adj,p,n);
	return 0;
	
}



