#include <iostream>
#include <vector>
#include "Author.cpp"

using namespace std;
class Book{
private:
    string name;
    vector <Author> authors;
    double price;
public:
    Book(string name, vector<Author> authors, double price){
        this->name=name;
        this->authors=authors;
        this->price=price;
    }
    
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return name;
    }
    
    void setPrice(double price){
        this->price=price;
    }
    double getPrice(){
        return price;
    }
    
    string getAuthorNames(){
        string authorNamesList=authors[0].getName();
        for (int i=1; i<authors.size();++i){
            authorNamesList=authorNamesList+ ", "+ authors[i].getName();
        }
        return authorNamesList;
    }
};
