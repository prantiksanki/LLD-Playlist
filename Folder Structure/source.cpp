#include<iostream>
#include "headerFiles/Date.h"
using namespace std ; 




Date::Date(int month, int day, int year)
{
    this -> month = month ; 
    this -> day = day ;
    this -> year = year ; 
}

void Date::display()
{
    cout << month << "/" << day << "/" << year << endl ; 
}


int main()
{
    Date Valentines(2,14, 2019) ; 
    Valentines.display() ; 
}