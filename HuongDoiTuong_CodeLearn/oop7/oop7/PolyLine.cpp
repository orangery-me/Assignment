#include <iostream>
#include <vector>
#include <cmath>
#include "Point.cpp"
using namespace std;

class PolyLine{
private:
    vector <Point> point;
public:
    PolyLine(){};
    PolyLine(vector <Point> point){
        this->point=point;
    }
    void appendPoint(Point point){
        this->point.push_back(point);
    }
    void appendPoint(int x, int y){
        point.push_back(Point(x,y));
    }
    
    double getLength(){
        double length=0;
        for (int i=0; i<point.size()-1; ++i){
            length+=sqrt(pow(point[i].getX()-point[i+1].getX(),2)+pow(point[i].getY()-point[i+1].getY(),2));
        }
        return length;
    }
};
