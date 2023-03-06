#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person
{
public:
    string name ;
    string password ;
    int id ;
    double balance =0 ;

public :
    Person(){}
    void setName (string n )
    {
        if (n.length()<5 )
        {
            cout << " less than 5 alphabetic ";
        }
        else if ( n.length()> 20)
        {
            cout << " more than 20 alphabetic " ;
        }
        else
        {
    for (int i = 0; i<n.size(); i++){ string n;
    if (n[i]<65){cout<<"User name should be alphabetic only 1 ";break;}
    else if (n[i]>90&&n[i]<97){cout<<"User name should be alphabetic only 2";break;}
    else if (n[i]>122){cout<<"User name should be alphabetic only 3 ";break;}
    else {name = n;}
    }
        }

    }
    void setPassword (string p)
    {
        if (p.length()<5 )
        {
            cout << " less than 5  ";
        }
        else if ( p.length()> 20)
        {
            cout << " more than 20  " ;
        }
        else
        {
            password = p ;
        }

    }
    void setId(int i )
    {
        id=i;
    }
    void setBalance (double b )
    {
        if (b<1500)
        {
            cout<< " less than min balance " ;
        }
        else
        {
            balance = b ;
        }
    }
    string getName ()
    {
        return name ;
    }
    string getPassword ()
    {
        return password;
    }
    int getId()
    {
        return id;
    }
    double getBalance ()
    {
        return balance;
    }
   virtual void display_info ()
    {
        cout << "The ID " <<id <<endl;
        cout << "The Name is  " <<name <<endl;
        cout << "The Password is " <<password <<endl;
        cout << "The Balance is " <<balance <<endl;
    }


};

#endif // PERSON_H
