#include<iostream>
using namespace std;
typedef struct employee{
    int eId;  //4 bytes
    char favChar; //1
    float salary;  //4   Note:Total=9 bytes
} ep;

union money{
    int rice ; //4 
    char car; //1
    float pouds; //4   Note:Total=4 bytes  Can only use one datatype at a time 
};


int main()
{
//  enum Meal{Breakfast,Lunch,Dinner};
//  Meal m1=Breakfast;
//  cout<<(m1==0)<<endl;
//  cout<<Breakfast<<endl;
// cout<<Lunch<<endl;
// cout<<Dinner<<endl;
    // ep sagar;
    union money m1;
    m1.rice=34;
    m1.car='c';
    cout<<m1.rice<<endl;
    cout<<m1.car;
//     struct employee sagar;
//     sagar.eId=1;
//     sagar.favChar='s';
//     sagar.salary=10000000;
//    cout<<sagar.salary;
return 0;
}