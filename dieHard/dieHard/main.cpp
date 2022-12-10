#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector <int> Air(int H, int A){
    vector <int> res;
    res.push_back(H+3);
    res.push_back(A+5);
    return res;
}
vector <int> Fire(int H, int A){
    vector <int> res;
    res.push_back(H-20);
    res.push_back(A+5);
    return res;
}
vector <int> Water(int H, int A){
    vector <int> res;
    res.push_back(H-5);
    res.push_back(A-10);
    return res;
}
bool checkDie(vector <int> res){
    if (res[0]>0 && res[1] >0 ) return true;
    else return false;
}

int main(){
    int H,A,count=0;
    cin >>H>>A;
    vector <int> players= {H,A};
    string area="Fire";

    while (count ++){
        cout <<players[0]<<" "<<players[1]<<endl;
        
        if (area=="Fire" || area=="Water"){
            area="Air";
            players=Air(H,A);
        }
        
        else{
            if ( checkDie(Water(H,A)) && checkDie(Fire(H,A))){
                
                if (fabs(Water(H,A)[0]-Water(H,A)[1]) < fabs(Fire(H,A)[0]-Fire(H,A)[1]) ){
                    area="Water";
                    players=Water(H,A);
                }
                
                else{
                    area="Fire";
                    players=Fire(H,A);
                    
                }
            }
            
            else{
                    if ( checkDie(Water(H,A)) ){
                    area="Water";
                    players=Water(H,A);
                    }
                
                    if ( checkDie(Fire(H,A)) ){
                    area="Fire";
                    players=Fire(H,A);
                    }
                    
                    if (checkDie(Water(H,A)) ==false && checkDie(Fire(H,A)) ==false)
                    break;
                }
        }
        
    }
    
    cout <<count<<endl;
}
