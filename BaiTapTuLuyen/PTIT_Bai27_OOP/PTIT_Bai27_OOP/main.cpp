#include <iostream>
using namespace std;

class Game{
private:
    string username;
    string password;
    string ten;
    string timeIn;
    string timeOut;
    int totalTime;
public:
    void input(){
        getline(cin,username);
        getline(cin,password);
        getline(cin,ten);
        getline(cin,timeIn);
        getline(cin,timeOut);
    }
    void tinhGio(){
        int hourIn,minIn, hourOut,minOut;
        hourIn = (timeIn[0] - '0')*10+ (timeIn[1])-'0';
        minIn = (timeIn[3] - '0')*10+ (timeIn[4]-'0');
        
        hourOut = (timeOut[0] - '0')*10+ (timeOut[1]-'0');
        minOut = (timeOut[3] - '0')*10+ (timeOut[4]-'0');
        totalTime= (hourOut-hourIn)*60 + (minOut-minIn);
    }
    
    int GettotalTime(){
        return totalTime;
    }
    
    string Getusername(){
        return username;
    }
    void output(){
        int h=GettotalTime()/60;
        int m=GettotalTime()-h*60;
        cout <<username<<" "<<password<<" "<<ten<<" "<<h<<" gio "<<m<<" phut "<<endl;
    }
    
};

bool cmp(Game pl1, Game pl2){
    int time1=pl1.GettotalTime();
    int time2=pl2.GettotalTime();
    
    if (time1 != time2)
        return (time1>time2);
    
    else
        return (pl1.Getusername() < pl2.Getusername());
}

int main(int argc, const char * argv[]) {
    int n; cin>>n;
    cin.ignore();
    Game pl[20];
    
    for (int i=0; i<n; ++i){
        pl[i].input();
        pl[i].tinhGio();
    }
    
    sort(pl, pl+n,cmp);
    
    for (int i=0; i<n; ++i)
        pl[i].output();
        
    return 0;
}
