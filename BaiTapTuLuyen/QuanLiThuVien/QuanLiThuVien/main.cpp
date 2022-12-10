#include <iostream>
#include "Book.cpp"
#include "Student.cpp"

using namespace std;
int main(){
    
    Student st1(1022,"Chau Thi",{Book(12,"Giao Trinh") } );
    
    
    st1.PhieuMuon(1,{Book(13,"Lap Trinh C"), Book(14,"Triet hoc Mac Lenin") });
    st1.displayReaderInfor();
    
    vector <Book> LibraryBook={Book(12,"Giao Trinh"),Book(13,"Lap trinh C"), Book(14,"Triet hoc Mac Lenin") };
    
}
