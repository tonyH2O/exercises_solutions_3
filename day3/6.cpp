#include <iostream>
using namespace std;

int main()
{
  int age;
  int age_total = 0;
  int number = 0;

  cout<<"Enter age or -1 to quit: "<<endl;
  cin>>age;

  while(age!=-1)
  {
    age_total+=age;
    number++;
    cout<<"Enter next age or -1 to quit: "<<endl;
    cin>>age;
  }

  cout<<"Number of ppl entered: "<<number<<endl;
  cout<<"Average age: "<<age_total/number<<endl;

  return 0;

}


