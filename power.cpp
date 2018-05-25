#include <iostream>
using namespace std;
int main()
{
	int n,i,x=1,pow=2;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    x=x*pow;
	    if(x==n)
	    {
	        cout<<"yes";
	        break;
	    }
	}
        if(x!=n)
	    {
	        cout<<"no";
	    }
	return 0;
}
