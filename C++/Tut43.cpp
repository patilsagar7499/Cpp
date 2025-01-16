#include<iostream>
using namespace std;
class Base1{
 public:
 void greet()
 {
    cout<<"Hi"<<endl;
 }
};
class Base2{
 public:
 void greet()
 {
    cout<<"Sagar"<<endl;
 }
};
class Derived:public Base1,Base2{
   public:
   void greet()
   {
    Base2::greet();//Ambiguity resolution
   }
};
int main()
{
    Derived d;
    d.greet();
return 0;
}