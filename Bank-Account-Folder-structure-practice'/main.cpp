#include<iostream>
#include "Modules/bankAccount.h"


using namespace std ;


int main()
{
    bankAccount account1("John Doe", 1000.0) ; 
    account1.displayBalance() ; 

    account1.deposite(500.0) ; 
    account1.displayBalance() ; 

    account1.withdraw(200.0) ; 
    account1.displayBalance() ; 

    account1.withdraw(2000.0) ; // Attempt to withdraw more than balance
    account1.displayBalance() ; 

    return 0 ;
}

