#include <iostream>
#include "Transport.cpp"
#include "Car.cpp"
#include <vector>

using namespace std;
int main(){
    vector <Car> myCar;
    vector <Car> bestCar= Car::getCarHaveMaxSeat(myCar={Car("VN","Ford",2021,300,4,"diesel"), Car("Japan","Toyota",2019,260,5,"diesel")} );
    
    for (int i=0; i<bestCar.size(); ++i)
    bestCar[i].display();
}
