#include <iostream>
#pragma  once

using namespace std;
class Book{
private:
    int id;
    string name;
    int amount;
    
public:
    Book(int id, string name){
        this->id=id;
        this->name=name;

    }
    
    int getId(){
        return id;
    }
    
    void setName(int name){
        this->name=name;
    }
    string getName(){
        return name;
    }
    void setAmount(int amount){
        this->amount=amount;
    }
    int getAmount(){
        return amount;
    }
    
    
    void displayBookState(){
        cout <<"Book ID: "<<id<<endl;
        cout <<"Book Name: "<<name<<endl;
    }
};
