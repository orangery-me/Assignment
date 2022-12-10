#include <iostream>
using namespace std;

class Animal{
public:
    ~Animal(){
        cout <<"Delete object animal";
    }
};

class Dog: public Animal{
public:
    ~Dog(){
        cout<<"Delete dog";
    }
};

int main(){
    Animal *a= new Dog();
    delete a;
    return 0;
    
}
