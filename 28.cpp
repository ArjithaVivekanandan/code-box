#include<iostream.h>
#include<conio.h>
void main()
{
int first,last;
int a[100],search,n;
cout<<"Enter no.of.elements:";
cin>>n;
cout<<"Enter the elements";
for(int i=0,i<n;i++)
{
cin>>a[i];
}
cout<<"Enter number for which index is required";
cin>>search;
first=0;
last=n-1;
middle = (first+last)/2;
	while (first <= last)
	{
		if(a[middle] < search)
		{
			first = middle + 1;

		}
		else if(a[middle] == search)
		{
    cout<<"Entire List";
    for(i=0;i<n;i++)
    {
    cout<<a[i];
    }
			cout<<search<<" found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<search<<" is not present in the list.";
	}
getch();
}


