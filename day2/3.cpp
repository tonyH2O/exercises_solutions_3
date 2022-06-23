#include <iostream>
#include <string>
using namespace std;


class my_class
{
  public:
       my_class(string z)
       {
         set_name(z);
       }


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
   my_class bo("Lusi Musi");
   cout<<bo.get_name()<<endl;

   return 0;
}


