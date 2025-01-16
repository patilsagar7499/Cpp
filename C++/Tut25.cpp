#include<iostream>
using namespace std;
class Complex{
  int a,b;
  public:
  void setdata(int a,int b)
  {
    this->a=a;
    this->b=b;
  }
  void setdatabysum(Complex c1,Complex c2)
  {
    a=c1.a+c2.a;
    b=c1.b+c2.b;
  }
  void print(){
    cout<<a<<"+"<<b<<"i"<<endl;
  }
};
int main()
{
    Complex c1,c2,c3;
    c1.setdata(1,2);
    c1.print();
    c2.setdata(3,4);
    c2.print();
    c3.setdatabysum(c1,c2);
    c3.print();
return 0;
}


















// #include<iostream>
// using namespace std;
// class Employee{
// int id;
// static int count;
// public:
// void setdata(){
//     cout<<"Enter:"<<endl;
//     cin>>id;
// }
// void getdata(){
//     count++;
//     cout<<"Employee id:"<<id<<",Employee no.:"<<count<<endl;
// }
// };
// int Employee::count;
// int main()
// {
//     Employee e[4];
//    for(int i=0;i<4;i++)
//    {
//     e[i].setdata();
//     e[i].getdata();
//    }
// return 0;
// }

