#include <iostream>
#include <fstream>
#include "employee.h"
#include "client.h"
#include "admin.h"
#include "person.h"
#include "DataSourceInterface.h"
#include "FileManager.h"

int main()
{
    FileManager f;
    Client c(1," mahmoud ","wahba",500000);
    f.addClient(c);
    Client e(1,"eman","samak",90000);
    f.addClient (e);
   // Employee e(1,"mo","1253",50000,23356555);
//   f.addEmployee(e);
//  f.addAdmin(a);
  //  Admin a(1," mona ","1354", 9000,9000);
  //  e.editClient(5," ahmed ","536212",9000,c);


}
