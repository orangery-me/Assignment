
#include <iostream>
#include "Employee.cpp"
#include "Manager.cpp"


int main(){
    Employee e1("Khanh",1200);
    e1.display();
    Manager m1("Van",1200,450);
    m1.display();
    return 0;
}
