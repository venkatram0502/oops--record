#include<iostream>
using namespace std;
class student{
    public:
    //Constructor
    student(){
        cout<<"Constuctor called!"<<endl;
    }
    //Destructor
    ~student(){
        cout<<"Destructor called!"<<endl;
    }
    void display()
    {
        cout<<"Inside display function"<<endl;
    }
};
int main(){
    cout<<"Creating object d1"<<endl;
    student s1;//constructor called
    s1.display();
    cout<<"Exiting main..."<<endl;
    return 0;
}