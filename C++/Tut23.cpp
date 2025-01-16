#include<iostream>
using namespace std;
class Shop{
  int itemId[100];
  int itemPrice[100];
  int counter;
  public:
  void initcounter(void){counter=0;}
  void setprice(void);
  void display(void);
};
void Shop::setprice(void)
{
    cout<<"Enter id of item "<<counter<<":";
    cin>>itemId[counter];
    cout<<"Enter price of item "<<counter<<":";
    cin>>itemPrice[counter++];
}
void Shop::display(void)
{
    for(int i=0;i<counter;i++)
    {
        cout<<"Item id:"<<itemId[i]<<",Item Price:"<<itemPrice[i]<<endl;
    }
}
int main()
{
    Shop s;
    s.initcounter();
    s.setprice();
    s.setprice();
    s.setprice();
    s.display();
return 0;
}