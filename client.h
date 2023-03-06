#ifndef CLIENT_H
#define CLIENT_H
#include "person.h"
#include <iostream>
using namespace std;

class Client :public Person
{

public:
    Client() {}
    Client (int i, string n, string p, double b)
    {
        id=i;
        name = n;
        password = p;
        setBalance(b);
    }
    void deposit (double amount)
    {
        if (amount <0 )
        {
            cout << " Can't deposit negative number " ;
        }
        else
        {
            balance +=amount ;
        }
    }
    void withdraw (double amount)
    {
        if (amount > balance )
        {
            cout << "Amount more than balance can't withdraw ";
        }
        else
        {
            balance -= amount ;

        }
    }
    void transferTo (double amount, Client& c)
    {
        if (amount > balance )
        {
            cout << "Amount more than balance can't Transfer  ";
        }
        else
        {
            balance -= amount ;
          c.setBalance (c.getBalance()+amount);

        }
    }
    void checkBalance ()
    {
        cout<<" The current balance is " << balance ;
    }
    void display_info()
    {     cout << "The information about this Client : " <<endl;
        Person::display_info();

    }
};



#endif // CLIENT_H
