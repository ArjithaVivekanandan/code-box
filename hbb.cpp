#include<stdio.h>
#include<string.h>
#include<conio.h>
using namespace std;
void main()
{
int begin,end,i,j=0,len,temp,count=0;
String s;
printf<<"Enter string:";
gets(s);
len=s.length();
for(i=0;i<len;i++)
{
for(begin=j,end=j-1;begin<(i+j)/2;begin++;end--)
{
temp=s[begin];
s[begin]=s[end];
s[end]=temp;
}
j=i+1;
}
}
printf<<s<<"";
return 0;
}
