#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include "client.h"
#include "employee.h"
#include "admin.h"
#include "person.h"
#include "DataSourceInterface.h"
#include <iostream>
using namespace std;

//Create FileManager Class to implement DataSourceinterface
//a. addClient should save client info in clients.txt
//b. addEmployee should save employee info in employees.txt
//c. addAdmin should save employee info in admins.txt
//d. getAllClients(), getAllEmployees() and getAllAdmins() should retrieve data
//from files
//e. removeAllClients(), removeAllEmployees() and removeAllAdmins() should
//remove all data from the files
class FileManager :public DataSourceInterface
{
public:
    void addClient (Client& c)
    {
        ofstream os;
        os.open("client_data.txt",ios ::app );
        //os << "id " <<" - "<<"name "<<" - "<<"password "<<" - "<<"balance " << endl;
        os << c.getId()<<" - "<<c.getName()<<" - "<<c.getPassword()<<" - "<<c.getBalance()<<endl;
        os.close();
    }

    void addEmployee (Employee& e)
    {
        ofstream os;
        os.open("employee_data.txt",ios ::app );
        //os << "id " <<" - "<<"name "<<" - "<<"password "<<" - "<<"balance " <<"-"<<"Salary " <<endl;
        os << e.getId()<<" - "<<e.getName()<<" - "<<e.getPassword()<<" - "<<e.getBalance()<<"-"<<e.getSalary()<<endl;
        os.close();
    }

    void addAdmin (Admin& a)
    {
        ofstream os;
        os.open("admin.txt",ios ::app );
        os << "id " <<" - "<<"name "<<" - "<<"password "<<" - "<<"balance " <<"-"<<"Salary " <<endl;
       // os << a.getId()<<" - "<<a.getName()<<" - "<<a.getPassword()<<" - "<<a.getBalance()<<"-"<<a.getSalary()<<endl;
        os.close();
    }





};

#endif // FILEMANAGER_H
