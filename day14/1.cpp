#include <iostream>
using namespace std;

int main()
{
  int a;
  cin>>a;
  int factorial=1;

  for(int x=1;x<=a;x++)
  {
    factorial*=x;
  }

  cout<<factorial<<endl;
}

    
