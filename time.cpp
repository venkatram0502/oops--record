#include<iostream>
using namespace std;
class Time{
    private:
    int hours,minutes;
    public:
    void gettime();
    void displaytime();
    void addtime(Time t1,Time t2);
};
void Time::gettime()
{
    cout<<"enter the hours:";
    cin>>hours;
    cout<<"enter the minutes:";
    cin>>minutes;
}
void Time::addtime(Time t1,Time t2)
{
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=t1.hours+t2.hours;
}
void Time::displaytime()
{
    cout<<"hours"<<hours<<"minutes"<<minutes<<endl;
}
int main()
{
    Time t1,t2,t3;
    t1.gettime();
    t2.gettime();
    t3.addtime(t1,t2);
    cout<<"time 1:";
    t1.displaytime();
    cout<<"time 2:";
    t2.displaytime();
    cout<<"sum of time 1 and time 2:";
    t3.displaytime();
    return 0;
}






