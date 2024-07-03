#include<stdio.h>
#include<string.h>
int main()
{
 char a[100];
char s[100];
printf("enter the main string\n");
gets(a);
printf("enter the sub string\n");
gets(s);
int len1=strlen(a);
int len2=strlen(s);
int i,j,k,flag,flag1=0,v;
for(i=0;i<=len1-len2;i++)
{
k=0,flag=0;
for(j=i;j<i+len2;j++)
{
if(a[j]==s[k++])
{
continue;
}
else
{
flag=1;
break;
}
}
if(flag==0)
{
flag1=1;
v=i;

break;
}
}
if(flag1==1)
printf("string found at %d position",v);
else
printf("string not found");
}
