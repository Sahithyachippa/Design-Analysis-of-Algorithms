#include<stdio.h>
int f[50];
int fib(int n)
{
f[0]=0;
f[1]=1;
int i;
for(i=2;i<=n;i++)
{
f[i]=f[i-1]+f[i-2];
}
return f[n];
}
int main()
{
int n;
scanf("%d",&n);
printf("%d",fib(n));
return 0;

}
