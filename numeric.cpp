#include<iostream>

using namespace std;

int main()
{
   int num,num1,i,count=0;
   cin>>num;
   
  while(num>0)
  {
    num1=num%10;
    count++;
    num=num/10;
    
  }
  cout<<count;
    return 0;
}
