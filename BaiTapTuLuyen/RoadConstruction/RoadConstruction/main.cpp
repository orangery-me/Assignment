//
//  main.cpp
//  RoadConstruction
//
//  Created by Đinh Bảo Châu Thi on 12/23/22.
//

#include <iostream>
#include <vector>
using namespace std;

const int Max=100000;
int n,m,x,y, count=0;
int visited[Max]={};
vector <int> adj[Max];

void input(){
    cin >>n>>m;
    for (int i=1; i<=m; ++i){
        cin >>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

void dfs(int parent){
    
    visited[parent]=1;
        for (int it:adj[parent])
            if (! visited[it])
                dfs(it);
  
}
int main(int argc, const char * argv[]) {
    input();
    int count=0;
    for (int i=1; i<=n; ++i)
        if (!visited[i]){
            count++;
            dfs(i);
        }
    
    cout <<count<<endl;
}
