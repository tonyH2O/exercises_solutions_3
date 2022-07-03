#include <iostream>
using namespace std;

int main()
{
  float num1,num2;
  char operation;

  cout<<"Calculator"<<endl;
  cin>>num1>>operation>>num2;

  switch(operation)
  {
    case '-': cout<<num1<<operation<<num2<<"="<<num1-num2<<endl;
    break;
    case '+': cout<<num1<<operation<<num2<<"="<<num1+num2<<endl;
    break;
    case '/': cout<<num1<<operation<<num2<<"="<<num1/num2<<endl;
    break;
    case '*': cout<<num1<<operation<<num2<<"="<<num1*num2<<endl;
    break;
    case '%':
         bool is_num1_int,is_num2_int;
        is_num1_int = (int)num1==num1;
        is_num2_int = (int)num2==num2;

        if(is_num1_int&&is_num2_int)
        {
          
           cout<<num1<<operation<<num2<<"="<<(int)num1%(int)num2<<endl;
        }
        else
        {
          cout<<"not valid operation"<<endl;
        }

    break;
  }
}


