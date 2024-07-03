#include <stdio.h>
int max(int a, int b)
 { return (a > b)? a : b; }
int knapsack(int w, int wt[], int val[], int n)
{

   int i, j;

   int K[n+1][w+1];

   for (i = 0; i <= n; i++)

   {

       for (j= 0; j <= w; j++)

       {

           if (i==0 || j==0)

               K[i][j] = 0;

           else if (wt[i-1] <= j)

                 K[i][j] = max(val[i-1] + K[i-1][j-wt[i-1]],  K[i-1][j]);

           else

                 K[i][j] = K[i-1][j];

       }

   }
      return K[n][w];

}

 

int main()

{
int n,w,i;
printf("enter n,w\n");
scanf("%d %d",&n,&w);

    int val[n] ;

    int wt[n] ;
printf("enter the values of weight array:\n");
for(i=0;i<n;i++)
scanf("%d",&wt[i]);
printf("enter the values of val array:\n");
for(i=0;i<n;i++)
scanf("%d",&val[i]);
    printf("\nValue = %d", knapsack(w, wt, val, n));

    return 0;

}
