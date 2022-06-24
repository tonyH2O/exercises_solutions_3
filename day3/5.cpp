#include <iostream>
using namespace std;

int main()

{
  int x = 1;
  int n;
  int total = 0;

  while(x<=5)
  {
    cin>>n;
    total+=n;
    x++;

  }

  cout<<"total is "<<total<<endl;

  return 0;
}

