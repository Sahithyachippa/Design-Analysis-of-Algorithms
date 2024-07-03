#include<stdio.h>
int binomial(int n,int k)
{
if(n==k||k==0)
return 1;
else
return binomial(n-1,k-1)+binomial(n-1,k);
}
int main()
{
int n,k;
printf("enter n and k\n");
scanf("%d %d",&n,&k);
printf("%d",binomial(n,k));


}
