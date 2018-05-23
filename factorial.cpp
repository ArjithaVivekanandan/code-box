#include<iostream>
using namespace std;
int main()
{
int num,fact=1,i;
cin>>num;
if((num!=0&&num!=1)&&(num>0||num<0))
{
for(i=1;i<=num;i++)
fact=fact*i;
  cout<<fact;
}
else
  cout<<"Invalid";
return 0;
}
