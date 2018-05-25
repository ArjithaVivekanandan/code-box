#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
    int c,d,temp;
    cin>>c>>d;
    temp=c;
    c=d;
    d=temp;
    cout<<c<<" "<<d;
   return 0;
}
