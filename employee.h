#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "client.h"
#include <iostream>
using namespace std;
class Employee :public Client
{
protected :
    double salary =0;
public :
    Employee() {}
    Employee (int i, string n, string p, double b,double s)
    {
        id=i;
        name = n;
        password = p;
        balance = b;
        salary = s;
    }
    void setSalary (int s )
    {
        if (s <=5000)
        {
            cout<< " Shouldn't less than 5000  ";
        }
        else
        {
            salary = s ;
        }
    }
    int getSalary ()
    {
        return salary ;
    }
   void display_info ()
    {  cout << "The information about this Employee : " <<endl;
        Client:: display_info ();
        cout << "The information about this Salary = " <<salary<<endl;


    }
    void listClient()
    {
        cout<<" ALL Clients "<<endl;
        ifstream is ;
        is.open ("client_data.txt");
        string line;
        while (getline(is,line))
        {

            cout<<line <<endl;


        }
    }

    void editClient(int id, string name, string password, double balance , Client& a) {
    a.setId(id);
    a.setName(name);
    a.setPassword(password);
    a.setBalance(balance);
    }

};



#endif // EMPLOYEE_H
