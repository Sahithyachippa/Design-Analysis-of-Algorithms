#include <bits/stdc++.h>
using namespace std;
int min(int size,int a[])
{
priority_queue<int,vector<int>,greater<int> >pq;
int i;
for(i=0;i<size;i++)
{
pq.push(a[i]);
}
int cost=0;
while(pq.size()>1)
{
int f=pq.top();
pq.pop();
int s=pq.top();
pq.pop();
int t=f+s;
cost=cost+t;
pq.push(t);
}
return cost;
}
int main()
{
/*int n=5;
int a[]={10,20,15,5,25};*/
int n,i;
cout<<"enter n";
cin>>n;
int a[n];
cout<<"enter array elements";
for(i=0;i<n;i++)
{
 cin>>a[i];
}
cout<<"min cost is "<<min(n,a);
return 0;
}
