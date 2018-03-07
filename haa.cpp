#include<iostream>
using namespace std;
 void print_repeat(int array[],int size[])
 {
 int i;
  int *count = (int *)calloc(sizeof(int), (size - 2));
 cout<<"Repeating elements are:";
for(i = 0; i < size; i++)
  {  
    if(count[arr[i]] == 1)
    cout<<arr[i];
    else
     count[arr[i]]++;
  }    
    
     
  }         
 
 
int main()
{
  int array[1000];
  int array_size = sizeof(array)/sizeof(array[0]);
  print_repeat(array, array_size);
  getchar();
  return 0;
}
