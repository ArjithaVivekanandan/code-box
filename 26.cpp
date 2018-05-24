#include<iostream>
using namespace std;

int main()
{
int n,i,j,t,m;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    if(n%2==0)
    {
        m=(a[n-1/2]+a[n/2])/2;
        
    }
    else
    m=a[n/2];
    
}
cout<<m;
return 0;
}
