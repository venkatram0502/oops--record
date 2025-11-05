#include <iostream>
using namespace std;

class Student {
private:
    string name;
    float height;

public:
  
    Student(string n = "", float h = 0.0) : name(n), height(h) {}

    float getHeight() const { return height; }

   
    string getName() const { return name; }

 
    bool operator==(const Student& other) {
        return height == other.height;
    }

    bool operator!=(const Student& other) {
        return !(*this == other);
    }

   
    bool operator<(const Student& other) {
        return height < other.height;
    }

   
    bool operator>(const Student& other) {
        return height > other.height;
    }

    bool operator<=(const Student& other) {
        return height <= other.height;
    }

    // Overloading the greater than or equal to operator (>=)
    bool operator>=(const Student& other) {
        return height >= other.height;
    }

    // Function to display student's details
    void display() const {
        cout << name << " - Height: " << height << " cm" << endl;
    }
};

int main() {
    // Create two Student objects
    Student student1("Alice", 165.5);
    Student student2("Bob", 170.2);

    // Display students' information
    cout << "Student 1: ";
    student1.display();

    cout << "Student 2: ";
    student2.display();

    // Comparison using overloaded operators
    if (student1 == student2) {
        cout << "Student 1 and Student 2 have the same height." << endl;
    } else {
        cout << "Student 1 and Student 2 have different heights." << endl;
    }

    if (student1 != student2) {
        cout << "Student 1 and Student 2 have different heights." << endl;
    }

    if (student1 < student2) {
        cout << "Student 1 is shorter than Student 2." << endl;
    }

    if (student1 > student2) {
        cout << "Student 1 is taller than Student 2." << endl;
    }

    if (student1 <= student2) {
        cout << "Student 1 is shorter than or equal to Student 2." << endl;
    }

    if (student1 >= student2) {
        cout << "Student 1 is taller than or equal to Student 2." << endl;
    }

    return 0;
}
