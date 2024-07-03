#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
return (a>b)?a:b;
}
int lcs(char* x,char* y,int m,int n)
{
if(m==0||n==0)
return 0;
else if(x[m-1]==y[n-1])
return 1+lcs(x,y,m-1,n-1);
else
return max(lcs(x,y,m-1,n),lcs(x,y,m,n-1));
}
int main()
{
/*char s1[]="aggtab";
char s2[]="gxtxayb";*/
char s1[5];
char s2[5];
printf("enter string1:\n");
scanf("%s",s1);
printf("enter string2;\n");
scanf("%s",s2);
int m=strlen(s1);
int n=strlen(s2);
printf("lcs is %d",lcs(s1,s2,m,n));
}
