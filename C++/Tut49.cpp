#include<iostream>
using namespace std;
class Test{
    public:
    int a,b;
    Test(int i,int j):a(i),b(j){
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
    }
};
int main()
{
    Test t(1,2);
return 0;
}