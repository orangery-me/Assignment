#include <iostream>
#include <sstream>
#include <set>

using namespace std;

void tach(string s,set <string> &se){
    stringstream data;
    data <<s;
    string tmp;
    
    while (data >> tmp){
        se.insert(tmp);
        
    }

}
int main(){
    string s,t;
    set <string > se1,se2;
    // chuyen chuoi 1 sang chu thuong
    getline(cin,s);
    for (int i=0; i<s.size(); ++i)
        s[i]= tolower(s[i]);
    
    // chuyen chuoi 2 sang chu thuong
    getline(cin,t);
    for (int i=0; i<t.size(); ++i)
        t[i]= tolower(t[i]);
    // tach tu
    tach(s,se1);
    tach(t,se2);
    
    for (string it:se1){
        if ( !se2.count(it) )
            cout <<it<<" ";
    }
}
