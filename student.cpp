#include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    string name;
    public:
    student()
    {
        rollno=1;
        name="venkat";
    }
    student(int r,string n)
    {
        rollno=r;
        name=n;
    }
    student(const student&s)
    {
        rollno=s.rollno;
        name=s.name;
    }
    void display(){
        cout<<"\nRollno:"<<rollno;
        cout<<"\nName:"<<name;
    }
    };
    int main()
    {
        student s1;
        student s2(100,"ram");
        student s3=s2;
        s1.display();
        s2.display();
        s3.display();
    }
