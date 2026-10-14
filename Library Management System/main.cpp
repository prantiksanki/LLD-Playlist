#include<iostream>
#include "Modules/library.h"


using namespace std ;

int main()
{
    cout << "############################ Library Management System ############################" << endl;
    cout << "###################################################################################" << endl;
    cout << endl;

    cout << "########## Add Library Details To Register New Library  ##########" << endl;
    string libraryName, libraryAddress;
    cout << "Enter Library Name: ";
    getline(cin, libraryName);
    cout << "Enter Library Address: ";
    getline(cin, libraryAddress);

    library myLibrary(libraryName, libraryAddress);


    cout << endl;




    cout << "################# Welcome To " << libraryName << " Library Management System #################" << endl;
    cout << "###################################################################################" << endl;
    cout << endl;

    cout << "########## Press 1. Add employee   2. Add Book  ##########" << endl;
    int choice;
    cin >> choice;


    switch (choice)
    {
        case 1:
        {
            cout << "########## Add Employee Details ##########" << endl;
            int employeeId;
            string employeeName;

            cout << "Enter Employee ID: ";
            cin >> employeeId;
            cin.ignore(); 

            cout << "Enter Employee Name: ";
            getline(cin, employeeName);

            cout << "Select Employee Type (0: Librarian, 1: Assistant, 2: Manager): ";
            int typeChoice;
            cin >> typeChoice;

            Role employeeType;
            switch (typeChoice)
            {
                case 0:
                    employeeType = Role::Librarian;
                    break;
                case 1:
                    employeeType = Role::Assistant;
                    break;
                case 2:
                    employeeType = Role::Manager;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
                    return 1;
            }   


            Employee newEmployee(employeeId, employeeName, employeeType);
            myLibrary.addEmployee(newEmployee);


            cout << endl;
            cout << "########## Employee Details ##########" << endl;
            newEmployee.displayEmployeeDetails();
            cout << endl;

            break ; 

        }


        case 2:
        {
            cout << "########## Add Book Details ##########" << endl;
            int bookId;
            string bookName, author;

            cout << "Enter Book ID: ";
            cin >> bookId;
            cin.ignore(); 

            cout << "Enter Book Name: ";
            getline(cin, bookName);

            cout << "Enter Author Name: ";
            getline(cin, author);

            Book newBook(bookId, bookName, author);
            myLibrary.addBook(newBook);
        }

        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
}