
#include <iostream>
#include "Subject.cpp"
#include <vector>

using namespace std;
class Student{
private:
    string id;
    string name;
    vector <Subject> s;
public:
    Student(){};
    Student(string id, string name, vector <Subject> s){
        this->id=id;
        this->name=name;
        this->s=s;
    }
    string getId(){
        return id;
    }
    string getName(){
        return name;
    }
    vector <Subject> getS(){
        return s;
    }
    
    long getSumMoney(){
        long sum=0;
        for (int i=0; i<s.size(); ++i){
            sum+=s[i].getMoney()*s[i].getNumberCredit();
        }
        return sum;
    }
    
    double avgPoint(){
        int totalCredit=0;
        double res=0;
        for (int i=0; i<s.size();++i){
            totalCredit+=s[i].getNumberCredit();
            res+=(s[i].getPoint()*s[i].getNumberCredit());
        }
        res=res/totalCredit;
        return res;
    }
    void display(){
        cout<<"Id: "<<id<<endl;
        cout<<"Name Student: "<<name<<endl;
        cout<<"List Subject "<<endl;
        for (int i=0; i<s.size();++i){
            s[i].display();
        }
        cout<<"Sum Money Have To Pay: "<<getSumMoney()<<endl;
        cout<<"Average Point: "<<avgPoint()<<endl;
    }
};

