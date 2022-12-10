#include <iostream>
#include "Shape.cpp"

using namespace std;
class Circle:public Shape{
    private:
    double radius;
    public:
    Circle(double radius){
        this->radius=radius;
    }
    
    double getArea(){
        return (3.14*radius*radius);
    }
    double getPerimeter(){
        return (3.14*2*radius);
    }
};
