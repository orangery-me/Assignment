
#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct info{
    int score;
    int goal;
};
bool cmp( pair<string, info> a, pair <string,info> b){
    
    if (a.second.score != b.second.score)
        return (a.second.score > b.second.score);
    if (a.second.goal != b.second.goal)
        return (a.second.goal > b.second.goal);
    
    return (a.first <b.first);
    
}
int main(){
    string s;
    map <string,info> mp;
    
    int n; cin>>n;
    cin.ignore();
    while ( n>0 && getline(cin,s)){
        
        string name1="",name2="";
        int i=1;
        // tach ten doi bong 1
        while (s[i] != ']'){
            name1 += s[i];
            i++;
        }
        // tach ban thang doi 1
        i+=2;
        int score1=0;
        while (s[i] != ' '){
            score1 += score1*10 + s[i]-'0';
            i++;
        }
        // tach ban thang doi 2
        i+=3;
        int score2=0;
        while (s[i] != ' '){
            score2= score2*10+ s[i]-'0';
            i++;
        }
        // tach ten doi bong 2
        i+=2;
        while (s[i] != ']'){
            name2+= s[i];
            i++;
        }
        
        if(mp.count(name1) == 0){
            mp[name1].score = mp[name1].goal = 0;
        }
        
        if(mp.count(name2) == 0){
            mp[name2].score = mp[name2].goal = 0;
        }
        
        if (score1 > score2)
            mp[name1].score+=3;
        
        else{
            if (score1 < score2)
                mp[name2].score +=3;
            
            else{
                mp[name1].score+= 1;mp[name2].score+= 1;
            }
        }
        
        mp[name1].goal += (score1 -score2);
        mp[name2].goal += (score2- score1);
        
        n--;
    }
    
    vector <pair<string,info>> vt;
    for (auto it:mp)
        vt.push_back(it);
    
       sort(vt.begin(), vt.end(), cmp);
    
    for (auto it: vt){
        cout <<it.first<<" "<<it.second.score<<" "<<it.second.goal<<endl;
    }
    
}
