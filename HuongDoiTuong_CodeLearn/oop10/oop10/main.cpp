#include <iostream>
#include "Student.cpp"
#include "Subject.cpp"
#include <vector>
using namespace std;

int main(){
    vector <Subject> s;
    s.push_back(Subject("Toan",9.3,4,500));
    s.push_back(Subject("Ly",9.0,3,400));
    s.push_back(Subject("Dai Cuong",8.9,3,500));
    Student st1("1","Nguyen Minh Hieu",s={Subject("OOP",9.9,3,300)});

    st1.display();
}
