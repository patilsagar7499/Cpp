#include<iostream>
using namespace std;
class A{
    int x=10;
    
    public:
    // friend void print(A &obj);
    friend class B;
    
};
class B{
    public:
    void print(A obj){
    cout<<obj.x;
}
};

int main()
{
    A obj;
    B obj1;
    obj1.print(obj);
    // print(obj);
    return 0;
}
