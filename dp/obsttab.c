
#include <stdio.h>
#include <limits.h>
int sum(int freq[],int i, int j);
int obst(int freq[], int n)
{
int dp[n][n];
int l,i,j,k;
for(l=0;l<=n;l++)
{
for(i=1;i<=n-l;i++)
{
j=i+l;
if(i==j)
 {   
dp[i][j]=freq[i];
}
/*else if(j<i)
{
dp[i][j]=0;
}*/
else
{
dp[i][j]=INT_MAX;
for(k=i;k<=j;k++)
{
int val=dp[i][k-1]+dp[k+1][j]+sum(freq,i,j);
	if (val<dp[i][j])
	dp[i][j]=val;
	}
	}
	}
	}
	return dp[1][n];
}	
int sum(int freq[], int i, int j)
{
	int s = 0;
	for (int k = i; k <=j; k++)
	s += freq[k];
	return s;
}

int main()
{
int n;
printf("enter no.");
scanf("%d",&n);
int keys[n],freq[n];

	printf("enter the elements of keys array\n");
	for(int i=1;i<=n;i++)
	scanf("%d",&keys[i]);
	printf("enter the elements of freq array\n");
	for(int i=1;i<=n;i++)
	scanf("%d",&freq[i]);


	
	printf("\nCost of Optimal BST is %d ",
			obst(freq,n));
	return 0;
}

