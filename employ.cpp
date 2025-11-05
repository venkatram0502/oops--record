#include <iostream>
#include <string>
using namespace std;

class Employee {
    int emp_id;
    string name;
    float basic_salary, hra, da, gross_salary;

public:
    // Function to get employee data
    void getdata() {
        cout << "\nEnter Employee ID: ";
        cin >> emp_id;
        cin.ignore(); // to ignore newline after emp_id
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Basic Salary: ";
        cin >> basic_salary;
    }

    // Function to calculate salary
    void calculate() {
        hra = 0.20 * basic_salary;   // HRA = 20% of basic
        da  = 0.10 * basic_salary;   // DA = 10% of basic
        gross_salary = basic_salary + hra + da;
    }

    // Function to display employee details
    void display() {
        cout << "\n--- Employee Payroll Details ---";
        cout << "\nEmployee ID     : " << emp_id;
        cout << "\nEmployee Name   : " << name;
        cout << "\nBasic Salary    : " << basic_salary;
        cout << "\nHRA (20%)       : " << hra;
        cout << "\nDA (10%)        : " << da;
        cout << "\nGross Salary    : " << gross_salary;
        cout << "\n--------------------------------\n";
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[50]; // array of Employee objects

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        emp[i].getdata();
        emp[i].calculate();
    }

    cout << "\n===== PAYROLL REPORT =====\n";
    for (int i = 0; i < n; i++) {
        emp[i].display();
    }

    return 0;
}
