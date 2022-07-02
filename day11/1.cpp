#include <iostream>
using namespace std;

int main()
{
  int host,guest;
  cout<<"Host: ";
  cin>>host;
  system("cls");

  cout<<"Guest: ";
  cin>>guest;

 /* if(host==guest)
  {
    cout<<"Correct";
  }
  else
  {
    cout<<"Not correct";
  }
*/

  (host==guest)?cout<<"Correct":cout<<"Not correct";

}

