#include<iostream>
using namespace std;
int main()
{
int N,D,A,sum=0,temp,i;
cin>>N>>D>>A;
temp=A;
for(i=0;i<N;i++)
{
sum=sum+temp;
temp=temp+D;
}
cout<<sum;
return 0;
}
