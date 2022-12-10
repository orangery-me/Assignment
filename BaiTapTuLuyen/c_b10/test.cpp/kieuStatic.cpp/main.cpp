/*
#include <iostream>
using namespace std;

class Point{
public:
    static int count;
    Point(){
        count++;
    }
    void display(){
        cout<<count<<endl;
    }
};
int Point::count=0;
int main(){
    Point p1,p2,p3,p4;
    p4.display();
    return 0;
}
*/

/* #include <iostream>
using namespace std;
class Box{
    int length;
public:
    Box(int length){
        this->length=length;
    }
    
    friend void getLength(Box);
};

 class So{
    int so;
public:
    So(int so){
        this->so=so;
    }
    friend int getLength();
}

void getLength(Box box1){
    cout<< box1.length+10<<endl;
}

int main(){
    Box box1(12);
    getLength(box1);
    return 0;
} */
#include <iostream>
#include <vector>


using namespace std;
class Card{
private:
    string nameBook;
    string nameAuthor;
    int numberBook;
public:
    Card(){};
    Card(string nameBook, string nameAuthor, int numberBook){
        this->nameBook=nameBook;
        this->nameAuthor=nameAuthor;
        this->numberBook=numberBook;
    }
    void display(){
        cout<<"Name Book: "<<nameBook<<endl;
        cout<<"Name Author: "<<nameAuthor<<endl;
        cout<<"Number Book: "<<numberBook<<endl;
    }
    
    int getNumberBook(){
        return numberBook;
    }
    static void sortCards(vector <Card> &cards){
        for (int i=0; i<cards.size()-1; ++i){
            for (int j=i+1; j<cards.size(); ++j){
                if (cards[i].numberBook>cards[j].numberBook)
                    swap(cards[i],cards[j]);
            }
        }
    }
};

int main(){
    vector <Card> cards;
    cards.push_back(Card("Con duong Hoi giao","Nguyen Phuong Mai",7));
    cards.push_back(Card("Noi buon chien tranh","Bao Ninh",12));
    cards.push_back(Card("Dai duong den","Dang Hoang Giang",3));
    Card::sortCards(cards);
    for (int i=0; i<cards.size();++i){
        cards[i].display();
        cout<<"----------------------------"<<endl;
    }
    
}

