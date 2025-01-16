#include<iostream>
using namespace std;
int main()
{
    //Pointer is datatype which stores the address of other datatypes
    int a=3;
    int *b=&a;
    // // & -->(Address of) operator
    // // * -->(Value at) Dereference operator
    //  cout<<b<<endl;
    //  cout<<*b<<endl;
     b=&a;
     cout<<b<<endl;
     cout<<*b<<endl;
    //  *b=a;
    //  cout<<b<<endl;
    //  cout<<*b<<endl;

    //Pointer to Pointer
    //  int **c=&b;
    //  cout<<c<<endl;
    //  cout<<*c<<endl;
    //  cout<<**c<<endl;

    

    //  c=&b;
    //  cout<<c<<endl;
    //  cout<<*c<<endl;
    //  cout<<**c<<endl;

    

    

return 0;
}