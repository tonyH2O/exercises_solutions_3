#include <iostream>
using namespace std;

int main()
{
  
  int a;
  string b;

  cin>>a;
  cin>>b;

  if(b=="m")
  {
    if(a<16)
    {
      cout<<"Master"<<endl;
    }
    else
    {
      cout<<"Mr."<<endl;
    }
  }

  else if(b=="f")
  {

    if(a<16)
    {
      cout<<"Miss"<<endl;
    }
    else
    {
      cout<<"Ms."<<endl;
    }
  }
  return 0;
}


