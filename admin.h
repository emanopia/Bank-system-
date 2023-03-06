#ifndef ADMIN_H
#define ADMIN_H
#include"employee.h"
#include <iostream>
using namespace std;
class Admin :public Employee
{
public :
    Admin () {}
    Admin (int i, string n, string p, double b,double s)
    {
        id=i;
        name = n;
        password = p;
        balance = b;
        salary = s;
    }
 void display_info ()
    { Person::display_info();
        cout << "The information about this Admin: " <<endl;
        cout << "The  Salary = " <<salary<<endl;
    }




};


#endif // ADMIN_H
