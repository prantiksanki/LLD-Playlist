#include<iostream>
#include<vector>
#include "book.h"
#include "employee.h"
using namespace std ;



class library
{

    private:
         string libraryName ; 
         string libraryAddress ;
         vector<Book> books ;
         vector<Employee> employees ;


    public:
       library(string libraryName = "Default Library Name", string libraryAddress = "Default Library Address") 
            : libraryName(libraryName), libraryAddress(libraryAddress) {}

        void displayLibraryDetails() 
        {
            cout << "Library Name: " << libraryName << endl;
            cout << "Library Address: " << libraryAddress << endl;
            cout << "Number of Books: " << books.size() << endl;
            cout << "Number of Employees: " << employees.size() << endl;
        }

        void addBook(const Book& book) 
        {
            books.push_back(book);
        }

        void addEmployee(const Employee& employee) 
        {
            employees.push_back(employee);
        }


};






