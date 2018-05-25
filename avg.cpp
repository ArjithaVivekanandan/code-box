#include<iostream>

using namespace std;

int main()
{
   int n,i,sum=0;
float avg;
   int a[n];
   cin>>n;
   for(i=0;i<n;i++)
   cin>>a[i];
  
   for(i=0;i<n;i++)
   {
      sum=sum+a[i];
   }
   avg=sum/n;
   cout<<avg;
  
 
    return 0;
}
