#include<stdio.h>
using namespace std;
int main();
{
int n,n1,l1,l2,i,rem,sum=0;
cin>>l1;cout<<" ";
cin>>l2;
for(i=l1+1;i<l2;i++)
{
n1=i;
while(i!=0)
{
 rem=i%10;
 sum=sum+(rem*rem*rem);
 i=i/10;
 }
 if(sum==n1)
 cout<<n1;
 }
 return 0;
 }
