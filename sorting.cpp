#include<iostream>
using namespace std;
int main()
{
 int n,i,j;
 int a[n];
 cin>>a[n];
 
    for(i=0;i<n;i++)
     cin>>a[i];
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                dummy=a[i];
                a[i]=a[j];
                a[j]=dummy;
            }
        }
        cout<<a[i];
    }
    return 0;
}
