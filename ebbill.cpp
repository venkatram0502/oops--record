#include<iostream>
using namespace std;
class EBBill
{
    private:
    int customerid,units;
    char customername[50],address[50];
    float amount;
    public:
    void getdetails()
    {
        cout<<"enter the customer ID:";
        cin>>customerid;
        cout<<"enter the customer Name:";
        cin>>customername;
        cout<<"enter address:";
        cin>>address;
        cout<<"enter no.of units:";
        cin>>units;
  }
  void calculate()
  {
    if(units<=100)
    amount=0;
    else if(units<=400)
    amount=(100*2.25)+(units-200)*4.25;
    else if(units<=600)
    amount=(100*2.25)+(200*4.25)+(units-400)*6.25;
    else
    amount=(100*2.25)+(200*4.25)+(400*6.25)+(units-500)*9;
  }
  void print()
  {
    cout<<"\nCustomerid:"<<customerid;
    cout<<"\nName:"<<customername;
    cout<<"\nAddress:"<<address;
    cout<<"\nUnits:"<<units;
    cout<<"\nBillamount:"<<amount;
 }
};
int main()
{
    EBBill b;
    b.getdetails();
    b.calculate();
    b.print();
    return 0;
}

