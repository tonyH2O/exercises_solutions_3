#include <iostream>
using namespace std;

int main()
{
  int height,width;
  cout<<"H: ";
  cin>>height;
  cout<<"W: ";
  cin>>width;


  char symbol;
  cout<<"S: ";
  cin>>symbol;

  for(int i=1;i<=height;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<symbol;
    }
    cout<<endl;
  }

}


