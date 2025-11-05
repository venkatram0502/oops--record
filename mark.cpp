#include<iostream>
using namespace std;
class student
{
    private:
    int rollno,mark1,mark2,mark3,total;
    char name[50];
    float avg;
    public:
    void getdata()
    {
        cout<<"enter the student name";
        cin>>name;
        cout<<"enter the rollno";
        cin>>rollno;
        cout<<"enter the marks";
        cin>>mark1>>mark2>>mark3;
    }
    void calculate()
    {
        total=mark1+mark2+mark3;
        avg=total/3;
    }
    void display()
    {
        cout<<"\nRollno:"<<rollno;
        cout<<"\nStudent name:"<<name;
        cout<<"\nMark1:"<<mark1;
        cout<<"\nMark2:"<<mark2;
        cout<<"\nMark3:"<<mark3;
        cout<<"\nTotal:"<<total;
        cout<<"\nAverage:"<<avg;
        if(mark1>=50&&mark2>=50&&mark3>=50)
        cout<<"pass";
    else
    cout<<"fail";     
  }   
    };
    int main()
    {
        student s;
        s.getdata();
        s.calculate();
        s.display();
    }
