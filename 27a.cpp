#include<iostream.h>
#include<conio.h>
#include<ctype.h>
bool isNumber(String s)
{
for(int i=0;i<s.length();i++)
if(isdigit(s[i])==0))
return true;
}
void main()
{
String str;
cout<<"Enter string:";
cin>>str;
if(isNumber(str)==0)
{
cout<<"Numeric";
}
else
{
cout<<"Not numeric";
}
getch();
}
