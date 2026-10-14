#include<iostream>

using namespace std ; 

enum Role { Librarian, Assistant, Manager };

class Employee
{
    private:
         int employeeId; 
         string employeeName;
         Role employeeType;

    public:
        Employee(int employeeId = 0, string employeeName = "Default Name", Role employeeType = Role::Assistant) 
            : employeeId(employeeId), employeeName(employeeName), employeeType(employeeType) {}

        void displayEmployeeDetails() 
        {
            cout << "Employee ID: " << employeeId << endl;
            cout << "Employee Name: " << employeeName << endl;
            cout << "Employee Type: " << (employeeType == Role::Librarian ? "Librarian" : (employeeType == Role::Assistant ? "Assistant" : "Manager")) << endl;
        }
}; 
