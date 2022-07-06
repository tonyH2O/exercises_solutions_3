#include <iostream>
using namespace std;

int main()
{

  int grade,sum=0;

  for(int x=0;x<3;x++)
  {
    do
    {
      cout<<"Enter grade "<<x+1<<": ";
      cin>>grade;


    }
    while(grade<1||grade>5);

    sum+=grade;
  }

  cout<<"sum = "<<sum<<endl;
  cout<<"avg = "<<(float)sum/3<<endl;


}


