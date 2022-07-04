#include <iostream>
using namespace std;

int main()
{
  int num,rev=0;
  cout<<"Number: ";
  cin>>num;

  while(num!=0)
  {
    rev*=10;
    int last = num%10;
    rev+=last;
    num/=10;
  }

  cout<<rev<<endl;
}


