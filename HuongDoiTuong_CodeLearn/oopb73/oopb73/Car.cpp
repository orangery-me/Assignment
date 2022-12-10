#include <iostream>
#include <vector>
#include "Transport.cpp"
using namespace std;

class Car:public Transport{
private:
    int numberSeat;
    string engineType;
public:
    Car(){};
    Car(string manufacturer, string name, int year, int speed, int numberSeat, string engineType):Transport(manufacturer, name, year, speed){
        this->numberSeat=numberSeat;
        this->engineType=engineType;
    }
    
    int getNumberSeat(){
        return numberSeat;
    }
    string getEngineType(){
        return engineType;
    }
    double getSpeedBasic(){
        return (getSpeed()/numberSeat);
    }
    void display(){
        Transport::display();
        cout <<"Number Seat: "<<numberSeat<<endl;
        cout <<"Engine Type: "<<engineType<<endl;
        cout <<"Speed Basic: "<<getSpeedBasic()<<endl;
    }
    
    static vector <Car> getCarHaveMaxSpeedBasic(vector <Car> c){
        int maxSpeedBasic=c[0].getSpeedBasic();
        vector <Car> res;
        
        for (int i=1; i<c.size(); ++i){
            if (maxSpeedBasic < c[i].getSpeedBasic() )
                maxSpeedBasic= c[i].getSpeedBasic();
        }
        
        for (int i=0; i<c.size(); ++i){
            if (maxSpeedBasic==c[i].getSpeedBasic())
                res.push_back(c[i]);
        }
        
        return res;
    }
    
    static vector <Car> getCarHaveMaxSeat(vector <Car> c){
        int maxSeatNumber=c[0].getNumberSeat();
        vector <Car> res;
        
        for (int i=1; i<c.size(); ++i){
            if (maxSeatNumber < c[i].getNumberSeat() )
                maxSeatNumber= c[i].getNumberSeat();
        }
        
        for (int i=0; i<c.size(); ++i){
            if (maxSeatNumber==c[i].getNumberSeat())
                res.push_back(c[i]);
        }
        
        return res;
    }
    
    
};
