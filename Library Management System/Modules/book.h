#include<iostream>
using namespace std ;

class Book
{
    private:
        int bookId ;
        string bookName ;
        string author ; 
        bool isAvailable ;
        int totalCopies ;

    public:
        Book(int bookId = 0 , string bookName = "Default Book Name" , string author = "Default Author" , bool isAvailable = true) ;


        void displayBookDetails()
        {
            cout << "Book ID : " << bookId << endl ;
            cout << "Book Name : " << bookName << endl ;
            cout << "Author : " << author << endl ;
            cout << "Availability : " << (isAvailable ? "Available" : "Not Available") << endl ;
        }
        
};

Book::Book(int bookId, string bookName, string author, bool isAvailable)
{
    this -> bookId = bookId ;
    this -> bookName = bookName ;
    this -> author = author ;
    this -> isAvailable = isAvailable ;
}


