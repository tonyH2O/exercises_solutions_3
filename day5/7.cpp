#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;

  for(int i=2;n>0;++i)
  {
    bool is_prime=true;
    for(int j=2;j<i;++j)
    {
      if(i%j==0)
      {
        is_prime=false;
        break;
      }
    }
    if(is_prime)
    {
      --n;
      cout<<i<<endl;
    }

  }
}


