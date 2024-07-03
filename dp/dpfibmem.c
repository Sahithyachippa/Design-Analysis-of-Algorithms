#include<stdio.h>

int fib(int n)
{
int a[n+1];
int i;
a[0]=0;
a[1]=1;
for(i=2;i<=n;i++)
{
a[i]=-1;
}
if(a[n]!=-1)
return a[n];
else
return a[n]=fib(n-1)+fib(n-2);
}


int main()
{
int n;
printf("enter n\n");
scanf("%d",&n);
printf("%d",fib(n));
}

