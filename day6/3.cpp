#include <iostream>
using namespace std;

int main()
{
  int a=0,b=50;

  while(b<=100)
  {
    a+=b;
    ++b;
  }

  cout<<a<<endl;
}

