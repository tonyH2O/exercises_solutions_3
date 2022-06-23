#include <iostream>
using namespace std;

int main()
{
  
  int a,b;

  cout<<"Enter number: ";
  cin>>a;

  cout<<"Enter another: ";
  cin>>b;

int  total1 = a+b;
  int total2 = abs(a-b);

  cout<<a<<" + "<<b<<" is "<<total1<<endl;
  cout<<a<<" - "<<b<<" is "<<total2<<endl;

  return 0;

}

