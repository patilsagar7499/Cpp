#include <bits/stdc++.h>
using namespace std;
inline int product(int a, int b)
{
    // Not recommend to use static variable in inline func.
    int c = 0;
    for (int i = 0; i < a * b; i++)
    {
        c *= a + b;
    }
    return c;
}
int moneyRecieved(int money, float factor = 1.04) // Default Argument factor and it should be written after compulsory argument
{
    return money * factor;
}
// int strlen(const char *p) //const assures that original value of p doesnot change.
// {}
int main()
{
    // time_t start, end;
    // int a=100,b=300;
    // time(&start);
    // for(int i=0;i<10;i++){
    // cout<<product(a,b)<<endl;}
    //  time(&end);
    //   double time_taken = double(end - start);
    // cout << "Time taken by program is : " << fixed
    //     << time_taken << setprecision(5);
    // cout << " sec " << endl;
    int money = 100000;
    cout << "Money deposited:" << money << ",Money Recieved:" << moneyRecieved(money) << endl;
    cout << "Money deposited:" << money << ",Money Recieved:" << moneyRecieved(money, 1.1) << endl;
    return 0;
}