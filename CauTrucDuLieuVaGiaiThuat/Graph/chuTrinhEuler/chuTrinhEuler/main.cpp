//
//  main.cpp
//  chuTrinhEuler
//
//  Created by Đinh Bảo Châu Thi on 1/3/23.
//

#include <iostream>
#include <stack>
#include <set>
#include <vector>
using namespace std;

int n,m;
set <int> adj[1000];
int degree[1000];

void input(){
    cin >>n>>m;
    for (int i=0; i<m; ++i){
        int x,y;
        cin >>x>>y;
        adj[x].insert(y);
        adj[y].insert(x);
        degree[x]++;
        degree[y]++;
    }
}
void euler(int v){
    stack <int> st;
    vector <int> EC;
    st.push(v);
    while ( !st.empty() ){
        int x=st.top();
        if ( adj[x].size()!=0 ){
            int y=*adj[x].begin();
            st.push(y);
            // xoa canh x,y
            adj[x].erase(y);
            adj[y].erase(x);
        }
        else {
            st.pop();
            EC.push_back(x);
            
        }
    }
    
    for (auto it:EC){
        cout <<it<<" ";
    }
    
}

int main(int argc, const char * argv[]) {
    input();
    euler(1);
}
