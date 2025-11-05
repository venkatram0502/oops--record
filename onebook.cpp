#include<iostream>
using namespace std;
class book
{ 
    private:
    int accno,pages;
    char author[50],bookname[50],isbno[50];
    float price;
    public:
    void getdata()
    {
        cout<<"enter the book name:";
        cin>>bookname;
        cout<<"enter the author name:";
        cin>>author;
        cout<<"enter the book price:";
        cin>>price;
        cout<<"number of pages:";
        cin>>pages;
        cout<<"enter the accno:";
        cin>>accno;
        cout<<"enter the isbno:";
        cin>>isbno;
    }
    void display()
    {
        cout<<"\nBook accno:"<<accno;
        cout<<"\nBook name:"<<bookname;
        cout<<"\nBook price:"<<price;
        cout<<"\nBook pages:"<<pages;
        cout<<"\nAuthor name:"<<author;
        cout<<"\nIsb no:"<<isbno;
    }
};
int main()
{
    book b;
    b.getdata();
    b.display();
}
