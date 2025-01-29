#include<iostream>
using namespace std;
class Test{
    int a,b;
    public:
    
    Test(int i,int j):a(i),b(j){
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
    }
    // Test(int i,int j):a(i),b(j+2) -->Works fine
    // Test(int i,int j):a(i),b(j+a) -->Works fine
    // Test(int i,int j):b(i),a(j) -->Works fine
    // Test(int i,int j):b(i),b(j+2) -->Works fine
    // Test(int i,int j):b(i),b(j+a) -->Doesn't work fine as a is initialized before b!
};
int main()
{
    Test t(1,2);
return 0;
}


