#include <iostream>
#pragma once

using namespace std;

class Transport{
private:
    string manufacturer;
    string name;
    int year;
    int speed;
public:
    Transport(){};
    Transport(string manufacturer, string name, int year, int speed){
        this->manufacturer=manufacturer;
        this->name=name;
        this->year=year;
        this->speed=speed;
    }
    string getManufacture(){
        return manufacturer;
    }
    string getName(){
        return name;
    }
    int getYear(){
        return year;
    }
    int getSpeed(){
        return speed;
    }
    void display(){
        cout <<"Manufacturer: "<< manufacturer<<endl;
        cout <<"Name: "<<name<<endl;
        cout <<"Year Of Manufacturer: "<<year<<endl;
        cout <<"Speed: "<<speed<<endl;
    }
};
