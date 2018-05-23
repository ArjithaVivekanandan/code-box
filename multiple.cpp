#include<iostream>
using namespace std;
int main()
{
int n,i;
cin>>n;
if((n>0)||(n<0))
{
for(i=1;i<=5;i++)
cout<<i*n<<" ";
}
else
cout<<"Invalid input";
return 0;
}
