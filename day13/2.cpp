#include <iostream>
using namespace std;

int main()
{
  int number;
  cout<<"Number: ";
  cin>>number;

  if(number==0)
  {
    cout<<"you entered 0"<<endl;
  }
  else
  {
    int counter=0;
    while(number>0)
    {
      number=number/10;
      counter++;
    }
    cout<<counter<<endl;
  }
}

