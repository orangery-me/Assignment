//
//  main.cpp
//  BFS_TreeDataStructure
//
//  Created by Đinh Bảo Châu Thi on 12/14/22.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n,m;
vector <int> adj[1000];

void input(){
    // n:so dinh, m:so canh
    cin>>n>>m;
    for (int i=1; i<=m; ++i){
        int x,y;
        cin >>x>>y;
        adj[x].push_back(y);
        //adj[y].push_back(x);
    }
}

void bfs(int u){
    queue <int> ucv;
    int visited[1000]={};
    
    ucv.push(u);
    while(ucv.empty()==false){
        
        int x=ucv.front();
        cout<<x<<" ";
        ucv.pop();
        
        for (auto it:adj[x])
            
            if (! visited[it]){
                
                visited[it]=1;
                ucv.push(it);
            }
    }
}

int main() {
    input();
    bfs(1); //xet th dinh la 1
}

