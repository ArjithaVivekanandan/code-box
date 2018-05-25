#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    
    
}
int main()
{
  int e,f;
    cin>>e>>f;
    swap(&e,&f);
    cout<<e<<f;
   return 0;
}
