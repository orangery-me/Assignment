#include "Person.cpp"
#include "Employee.cpp"
#include "Customer.cpp"

int main() {
    Person *person1 = new Employee("Trung", "HN", 3300);
    Person *person2 = new Customer("Linh", "BN", 10400);
    person1->display();
    person2->display();
    return 0;
}
