#include<iostream>
using namespace std;
class book
{ 
    private:
    int accno,pages;
    char author[50],bookname[50],isbno[50];
    float price;
    public:
    void getdata();
    void display();

};

void book::getdata()

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
    void book::display()
    {
        cout<<"\nBook accno:"<<accno;
        cout<<"\nBook name:"<<bookname;
        cout<<"\nBook price:"<<price;
        cout<<"\nBook pages:"<<pages;
        cout<<"\nAuthor name:"<<author;
        cout<<"\nIsb no:"<<isbno;
    }

int main()
{    
    int i=0,n;
    book b[2];
    cout<<"enter n:";
    cin>>n;
    for(i=0;i<n;i++)
    {
    
        b[i].getdata();
    b[i].display();
}
}






