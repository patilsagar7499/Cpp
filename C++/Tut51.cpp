#include<iostream>
using namespace std;
class Complex{
int real,img;
public:
void setData(int real,int img)
{this->real=real;
this->img=img;}

void getData()
{cout<<real<<" "<<img<<endl;}
};

int main()
{
Complex* c=new Complex();
c->setData(1,2);
c->getData();

Complex *c1=new Complex[3];
Complex *temp=c1;
for(int i=0;i<3;i++)
{
    temp->setData(i,i+1);
    temp++;
}
for(int i=0;i<3;i++)
{
    c1->getData();
    c1++;
}
return 0;
}