#include<iostream>
using namespace std;
int main()
{
    // int *a=new int(10);
    // cout<<*a<<endl;
    // delete a;
    // cout<<*a<<endl;

    int *a=new int[3];
    *a=10,*(a+1)=20,*(a+2)=30;
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<endl;
    delete[] a;
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<endl;
return 0;
}