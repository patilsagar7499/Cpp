#include<iostream>
using namespace std;
class Employee{
int id;
static int count;
public:
void setdata(){
    cout<<"Enter:"<<endl;
    cin>>id;
}
void getdata(){
    count++;
    cout<<"Employee id:"<<id<<",Employee no.:"<<count<<endl;
}
};
int Employee::count;
int main()
{
    Employee e1,e2,e3;
    e1.setdata();
    e1.getdata();
    e2.setdata();
    e2.getdata();
    e3.setdata();
    e3.getdata();
return 0;
}