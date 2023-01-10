#include <iostream>
#include <set>
#include <map>
using namespace std;

int n;
const int nmax=1e6;
int a[nmax];
set <int> se;

void input(){
    cin>>n;
    for (int i=0;i<n; ++i){
        cin >>a[i];
        se.insert(a[i]);
    }
    
}

void find(){
    map <int,int> mp;
    int s=*se.begin();
    for (int it:se){
        if (it==*se.begin())
            continue;
        
        mp[it]=s;
        s=it;
    }
    
    for (int i=0; i<n; ++i)
        if (a[i]== *se.begin())
            cout <<"#"<<" ";
        else
            cout <<mp[a[i]]<<" ";
}


int main(int argc, const char * argv[]) {
    input();
    find();
}
