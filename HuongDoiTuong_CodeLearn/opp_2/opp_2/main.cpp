#include <iostream>
#include "Person.cpp"
#include "Student.cpp"
#include "Teacher.cpp"


using namespace std;

int main() {
        Student s("Thi", 23, "Ha Noi", 9.0);
        s.display();
        Teacher t("Tung", 34, "Ha Noi", 1700);
        t.display();
        return 0;
}
