#include<iostream>

using namespace std;

int main()
{
   int n,i,min,max;
   int a[n];
   cin>>n;
   for(i=0;i<n;i++)
   cin>>a[i];
   min=a[0];
   for(i=1;i<n;i++)
   {
       if(min>a[i])
       min=a[i];
       
   }
   max=a[0];
   for(i=1;i<n;i++)
   {
       if(max<a[i])
       max=a[i];
       
   }
   cout<<min<<" "<<max;
   
  
 
    return 0;
}
