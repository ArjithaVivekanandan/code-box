#include<iostream>
using namespace std;

int main()
{
int c1,c2,min1,h1,h2,min2;
int h,m;
int sub,hr,minute;

cin>>h1;
cout<<" ";
cin>>min1;
cout<<endl;

cin>>h2;
cout<<" ";
cin>>min2;
cout<<endl;

c1=h1*60;
min1=c1+min1;
c2=h2*60;
min2=c2+min2;


if(min1>min2)
{
 sub=min1-min2;
 hr=sub/60;
 minute=sub%60;
}
else
 {
 sub=min2-min1;
 hr=sub/60;
 minute=sub%60;
 }
 


cout<<hr<<" "<<minute;

   return 0;
}
