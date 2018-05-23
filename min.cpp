#include<iostream>
using namespace std;
int main()
{
int i,n,a[n],min;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
min=a[0];
for(i=1;i<n;i++)
{
if(min>a[i])
min=a[i];
}
cout<<min;
return 0;
}
