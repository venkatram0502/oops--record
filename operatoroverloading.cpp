#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor to initialize time
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    // Getter functions
    int getHours() const { return hours; }
    int getMinutes() const { return minutes; }
    int getSeconds() const { return seconds; }

    // Overloading the equality operator (==)
    bool operator==(const Time& other) {
        return (hours == other.hours && minutes == other.minutes && seconds == other.seconds);
    }

    // Overloading the not equal operator (!=)
    bool operator!=(const Time& other) {
        return !(*this == other);
    }

    // Overloading the less than operator (<)
    bool operator<(const Time& other) {
        if (hours < other.hours) return true;
        if (hours == other.hours && minutes < other.minutes) return true;
        if (hours == other.hours && minutes == other.minutes && seconds < other.seconds) return true;
        return false;
    }

    // Overloading the greater than operator (>)
    bool operator>(const Time& other) {
        return !(*this < other) && *this != other;
    }

    // Overloading the less than or equal to operator (<=)
    bool operator<=(const Time& other) {
        return (*this < other || *this == other);
    }

    // Overloading the greater than or equal to operator (>=)
    bool operator>=(const Time& other) {
        return (*this > other || *this == other);
    }

    // Function to display time
    void display() const {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    Time time1(10, 30, 45);
    Time time2(12, 15, 30);

    cout << "Time 1: ";
    time1.display();

    cout << "Time 2: ";
    time2.display();

    // Comparison using overloaded operators
    if (time1 == time2) {
        cout << "Time 1 is equal to Time 2." << endl;
    } else {
        cout << "Time 1 is not equal to Time 2." << endl;
    }

    if (time1 != time2) {
        cout << "Time 1 is not equal to Time 2." << endl;
    }

    if (time1 < time2) {
        cout << "Time 1 is less than Time 2." << endl;
    }

    if (time1 > time2) {
        cout << "Time 1 is greater than Time 2." << endl;
    }

    if (time1 <= time2) {
        cout << "Time 1 is less than or equal to Time 2." << endl;
    }

    if (time1 >= time2) {
        cout << "Time 1 is greater than or equal to Time 2." << endl;
    }

    return 0;
}
