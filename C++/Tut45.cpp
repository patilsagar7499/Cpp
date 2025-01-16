
// Basically we are solving diamond problem using virtual base class.

#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void set(int a)
    {
        roll_no = a;
    }
    void print()
    {
        cout << "Roll no:" << roll_no << endl;
    }
};
class Teacher : virtual public Student
{
protected:
    int maths, physics;

public:
    void set_marks(int m, int p)
    {
        maths = m;
        physics = p;
    }
    void print_marks()
    {
        cout << "Maths:" << maths << endl;
        cout << "Physics:" << physics << endl;
    }
};
class PT : virtual public Student
{
protected:
    int pt;

public:
    void set_score(int p)
    {
        pt = p;
    }
    void print_score()
    {
        cout << "PT:" << pt << endl;
    }
};
class test : public Teacher, public PT
{
public:
    void print_m()
    {
        int total = maths + physics + pt;
        print();
        print_marks();
        print_score();
        cout << "Total:" << total << endl;
    }
};

int main()
{
    test t;
    t.set(51);
    t.set_marks(100, 90);
    t.set_score(95);
    t.print_m();
    return 0;
}