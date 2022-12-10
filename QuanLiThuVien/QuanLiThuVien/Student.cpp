#include <iostream>
#include <vector>
#include "Book.cpp"
using namespace std;

class Student{
private:
    int StudentId;
    string name;
    vector <Book> ListBook;
public:
    Student(int StudentId, string name, vector <Book> ListBook){
        this->StudentId=StudentId;
        this->name=name;
        this->ListBook=ListBook;
        
    }
    int getStudentId(int StudentId){
        return StudentId;
    }
    
    void setName(int name){
        this->name=name;
    }
    string getName(){
        return name;
    }
    
    
    void displayReaderInfor(){
        cout <<"Student ID: "<<StudentId<<endl;
        cout <<"Name: "<<name<<endl;
        
        cout <<"------------List Book----------"<<endl;
        
        for (int i=0; i<ListBook.size(); ++i){
            ListBook[i].displayBookState();
        }
    }
    
    void PhieuMuon(int MaPhieu, vector<Book> Borrow){
        for (int i=0; i<Borrow.size(); ++i){
            
            ListBook.push_back(Borrow[i]);
            
        }
    }
};
