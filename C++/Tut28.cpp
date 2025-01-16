#include<iostream>
using namespace std;
class B;
class A{
  int x=10;
  public:
  friend void print(A,B);
};
class B{
   int y=10;
   public:
  friend void print(A,B);
};
void print(A obj1,B obj2)
{
    cout<<obj1.x+obj2.y;
}
int main()
{
A obj1;
B obj2;
print(obj1,obj2);
return 0;

}