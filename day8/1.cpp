#include <iostream>
using namespace std;

int main()
{
  string previous = "";
  string current;

  while(cin>>current)
  {
    if(previous==current)
    {
      cout<<"repeated word: "<<current<<endl;
    }
    previous=current;
  }
}

