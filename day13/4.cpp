#include <iostream>
using namespace std;

int main()
{
  int pin1=1234,pin2,error=0;

  do
  {
    cout<<"PIN: ";
    cin>>pin2;
    if(pin2!=pin1)
    {
      error++;
    }
  }
  while(error<3 && pin2!=pin1);


  if(error<3)
  {
    cout<<"loading...";
  }
  else
  {
    cout<<"blocked";
  }

}


