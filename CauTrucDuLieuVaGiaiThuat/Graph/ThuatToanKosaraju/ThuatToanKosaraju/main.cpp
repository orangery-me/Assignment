//
//  main.cpp
//  ThuatToanKosaraju
//
//  Created by Đinh Bảo Châu Thi on 12/22/22.
//

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

const int Max=10000;
int n,m,x,y;
int visited[Max]={};
vector <int> adj[Max],Tadj[Max];
stack <int> topo;

void input(){
    cin >>n>>m;
    
    for (int i=1; i<=m; ++i){
        cin >>x>>y;
        adj[x].push_back(y);
        Tadj[y].push_back(x);
        
    }
}

void dfs1( int root){
    visited[root]=1;
    for (int it: adj[root])
        if (! visited[it])
            dfs1(it);
    topo.push(root);
    
}

void dfs2(int root){
    visited[root]=1;
    for (int it: Tadj[root])
        if (! visited[it])
            dfs2(it);
    cout <<root<<" ";
}

void kosaraju(){
    dfs1(1);
    memset(visited,0,sizeof(visited));
    
    while (! topo.empty()){
        int x=topo.top();
        topo.pop();
        if (! visited[x]){
            dfs2(x);
            cout <<endl;
        }
    }
}

int main(int argc, const char * argv[]) {
    input();
    kosaraju();
}
