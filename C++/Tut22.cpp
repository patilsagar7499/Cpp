// C++ is C with classes
// Class is extension of structures(in C)
// Limitations of structure:
// 1)Members are public
// 2)No methods
// classes=struct+more
// Classes can have methods and properties
// structures in c++ are typedefed
// You can declare objects along with the class declaration like this:
// class Employee{
// Class defination
//}Sagar,abc,XYZ;

#include <iostream>
using namespace std;
class Binary
{
    string s;
    void checkbin(void);
public:
    void takeip(void);
    
    void onescomp(void);
    void display(void);
};
void Binary::takeip(void)
{
    cout << "Enter binary no:";
    cin >> s;
}
void Binary::checkbin(void)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "Not Binary!";
            exit(0);
        }
    }
}
void Binary::onescomp(void)
{
    checkbin();
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            s[i] = '1';
        }
        else
            s[i] = '0';
    }
}
void Binary::display(void)
{
    cout<<s<<endl;
}
int main()
{
    Binary b;
    b.takeip();
    // b.checkbin();
    b.display();
    b.onescomp();
    b.display();
    return 0;
}