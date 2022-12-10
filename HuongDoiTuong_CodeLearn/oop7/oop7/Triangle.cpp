#include <iostream>
#include <cmath>
#include "Point.cpp"
using namespace std;

class Triangle{
private:
    Point vertice1;
    Point vertice2;
    Point vertice3;
public:
    Triangle(Point vertice1, Point vertice2, Point vertice3){
        this->vertice1=vertice1;
        this->vertice2=vertice2;
        this->vertice3=vertice3;
    }
    Triangle(int x1, int y1, int x2, int y2, int x3, int y3 ){
        this->vertice1=Point(x1,y1);
        this->vertice2=Point(x2,y2);
        this->vertice3=Point(x3,y3);
    }
   
    double getPerimeter(){
        double length12=sqrt(pow(vertice1.getX()-vertice2.getX(),2)+pow(vertice1.getY()-vertice2.getY(),2));
        double length13=sqrt(pow(vertice1.getX()-vertice3.getX(),2)+pow(vertice1.getY()-vertice3.getY(),2));
        double length23=sqrt(pow(vertice3.getX()-vertice2.getX(),2)+pow(vertice3.getY()-vertice2.getY(),2));

        return (length12+length13+length23);
    }
};
