#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
   int f1=0,f2=1,f3;
   int i,num;
   cin>>num;
   cout<<f2<<" ";
   for(i=0;i<num-1;i++)
   {
       f3=f1+f2;
       f1=f2;
       f2=f3;
       cout<<f3<<" ";
   }
   
   
    return 0;
}
