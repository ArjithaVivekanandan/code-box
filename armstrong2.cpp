#include <iostream>
using namespace std;

int main()
{
  int a, b, i, num, rem, sum;
 cin >> a;
 cin >> b;
for(i = a; i <= b; i++)
  {     sum = 0;
        num = i;
for(; num > 0; num /= 10)
        {
         digit = num % 10;
         sum = sum + rem * rem * rem;
        }
   if(sum == i)
        {
            cout << i << endl;
        }
  }
 return 0;
}
