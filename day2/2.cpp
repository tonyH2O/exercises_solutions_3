#include <iostream>
#include <string>
using namespace std;


class my_class
{  
  public:
      void set_name(string x)
      {
        name = x;
      }

      string get_name()
      {
        return name;
      }



  private:
       string name;

 };

 int main()

 {
   my_class bo;
   bo.set_name("Lusi");
   cout<<bo.get_name()<<endl;

   return 0;

 }

