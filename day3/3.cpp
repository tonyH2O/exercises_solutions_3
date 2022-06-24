#include <iostream>
using namespace std;

int main()
{
  int n,sum=0;
  cout<<"How many numbers you want to sum? ";
  cin>>n;

  cout<<"Enter numbers: "<<endl;

  for(int x=0;x<n;x++)
  {
    int num;
    cin>>num;
    sum = sum+num;
  }

  cout<<"The sum is: "<<sum<<endl;

  return 0;
}


