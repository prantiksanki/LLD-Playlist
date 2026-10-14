#include<iostream>
using namespace std ;


class bankAccount
{
    private:
    string accountHolderName ;
    double balance; 

    public:
    bankAccount(string accountHolderName = "Default Name", double balance = 0.0) ;

    string getterAccountHolderName()
    {
        return accountHolderName ; 
    }
    double getterBalance()
    {
        return balance ; 
    }

    double deposite(double amount)
    {
        balance += amount ; 
        return balance ;
    }

    double withdraw(double bal)
    {
        if(bal > balance)
        {
            cout << "Insufficient Balance" << endl ; 
            return balance ; 
        }
        else
        {
            balance -= bal ; 
            return balance ;
        }
    }

    double displayBalance()
    {
        cout << "Account Holder Name : " << accountHolderName << endl ; 
        cout << "Balance : " << balance << endl ; 
        return balance ; 
    }
};


bankAccount::bankAccount(string accountHolderName, double balance)
{
    this -> accountHolderName = accountHolderName ; 
    this -> balance = balance ; 
}