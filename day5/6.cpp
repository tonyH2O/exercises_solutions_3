#include <iostream>
using namespace std;

int main()
{
  int x;
  cout<<"Enter x: ";
  cin>>x;

  int acc = 0;

  cin>>acc;
  int minn = acc;
  int maxx = acc;

  for(int i=1;i<x;++i)
  {
    int a;
    cin>>a;
    acc+=a;
    if(a<minn)
    {
      minn=a;
    }
    if(a>maxx)
    {
      maxx=a;
    }
  }

  cout<<"mean: "<<(double)acc/x<<endl;
  cout<<"max: "<<maxx<<endl;
  cout<<"min: "<<minn<<endl;
  cout<<"range: "<<(maxx-minn)<<endl;

}

