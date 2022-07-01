#include <iostream>
using namespace std;

int main()
{
  float w,h;
  cout<<"weight(kg), height(m): "<<endl;
  cin>>w>>h;


  float bmi = w/h*h;

  if(bmi<18.5)
  {
    cout<<"Underwight"<<endl;
  }
  else if(bmi>=18.5 && bmi<=24.99)
  {
    cout<<"Normal"<<endl;
  }
  else if(bmi>=25)
  {
    cout<<"Overweight"<<endl;
  }

}

