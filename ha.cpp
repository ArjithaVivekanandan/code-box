#include<iostream>
using namespace std;
 void print_repeat(int array[],int size[])
 {
 int i;
 cout<<"Repeating elements are:";
 for(i=0;i<size;i++)
 {
 if(array[abs(array[i])]>0)
  array[abs(array[i])] = -array[abs(array[i])];
    else
      printf("unique elements are %d ", abs(array[i]));
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
