#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
    string s;
    int i,count=0;
    getline(cin, s);
    for(i=0;i<s.length();i++)
    {
    if(s[i]>'0'&&s[i]<'9')
    {
        count++;
    }
}
cout<<count;
   return 0;
}
