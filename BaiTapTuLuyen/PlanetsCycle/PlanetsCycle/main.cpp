//
//  main.cpp
//  PlanetsCycle
//
//  Created by Đinh Bảo Châu Thi on 12/23/22.
//

#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

const int Max=2000003;
int n,x,st,decrease;
int visited[Max]={};
int dem[Max]={};
queue <int> path;
vector <int> adj[Max];

void input(){
    cin >>n;
    for (int i=1; i<=n; ++i){
        cin >>x;
        adj[i].push_back(x);
    }
}

bool dfs(int u){
    visited[u]=1;
    path.push(u);
    for (int it: adj[u]){
        st++;
        if (!visited[it]){
            if (dfs(it) == true)
                return true;
        }
        else{
            path.push(it);
            st+= dem[it];
            return true;
        }
    }
    return false;
}

int main() {
    input();
    for (int i=1; i<=n; ++i){
        
        if (!visited[i]){
            
            st=0; decrease=1;
            dfs(i);
            
            while (!path.empty() ){
                
                if (path.front() == path.back() )
                    decrease=0;
                
                dem[path.front()]= st;
                st-= decrease;
                path.pop();
            }
            
        }
    }
    for (int i=1; i<=n; ++i)
        cout <<dem[i]<<" ";
    
}
