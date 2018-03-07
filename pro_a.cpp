#include<iostream>
using namespace std;
 

void buildLowestNumberRec(string str, int n, string &res)
{
   
    if (n == 0)
    {
        res.append(str);
        return;
    }
 
    int len = str.length();
 
    
    if (len <= n)
        return;
 
  
    int minIndex = 0;
    for (int i = 1; i<=n ; i++)
        if (str[i] < str[minIndex])
            minIndex = i;
 
    
    res.push_back(str[minIndex]);
 
    
    string new_str = str.substr(minIndex+1, len-minIndex);
 
    
    buildLowestNumberRec(new_str, n-minIndex, res);
}
 

string buildLowestNumber(string str, int n)
{
    string res = "";
 
    
    buildLowestNumberRec(str, n, res);
 
    return res;
}
 

int main()
{
    string str[1000];
    int n;
    cout<<"Enter number:";
    cin>>str;
    cout<<"Enter no.of.digits to be removed";
    cin>>n;
    cout << buildLowestNumber(str, n);
    return 0;
}
